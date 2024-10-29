#include <stdio.h>
int a[25][25], n, z[5][700], zind, py, px;
int mov2int(char t) {
    int ret=0;
    switch(t) {
    case 'S': ret++;
    case 'L': ret++;
    case 'R': ret++;
    case 'D': ret++;
    default:
        break;
    }
    return ret;
}
void mov2d(int *d, int _dir) {
    d[0]=(_dir<2?(!_dir?-1:1):0); 
    d[1]=(_dir>1?(_dir%2?-1:1):0);
}
int mov_all(int y, int x, int _dir, int siz) {
    int d[2]; mov2d(d, _dir);
    int dy=d[0], dx=d[1], f=0;
    for(int i=0;i<siz&&!f;i++) {
        if(dy+y>=0&&dy+y<n&&dx+x>=0&&dx+x<n) {
            if(a[dy+y][dx+x]>=0) {
                y+=dy;
                x+=dx;
            } 
            else f=1;
        }
        else f=2;
    }   
    return f*10000+y*100+x;
}   
int cnt_wall(int y, int x) {
    int _dir[4]={0, 2, 1, 3}, tsum, ret=0, tmax=0;
    for(int i=0;i<4;i++) {
        int d[2]; mov2d(d, _dir[i]);
        int dy=d[0], dx=d[1];
        tsum=0;
        for(int _y=y+dy, _x=x+dx;_y>=0&&_x>=0&&_y<n&&_x<n;_y+=dy, _x+=dx) {
            if(a[_y][_x]<0) tsum++;
        }
        if(tsum>tmax) {
            tmax=tsum;
            ret=_dir[i];
        }
    }
    return ret;
}
void mov_ply(int _mov) {
    if(_mov==4) return;
    int t=mov_all(py, px, _mov, 1);
    py=t%10000/100;
    px=t%100;
}
void mov_zom(int now) {
    for(int i=0;i<zind;i++) {
        int y=z[0][i], x=z[1][i], is=z[2][i], _dir=z[3][i], siz=z[4][i];
        int t=mov_all(y, x, _dir, siz);
        y=t%10000/100;
        x=t%100;
        if(!is&&t/10000) {
            _dir=(!(_dir%2))+(_dir/2*2);
        }
        else if(is) {
            if(t/10000==1) {
                int d[2]; mov2d(d, _dir);
                a[y+d[0]][x+d[1]]=0;
            }
            _dir=cnt_wall(y, x);
        }
        a[y][x]=now;
        z[0][i]=y; z[1][i]=x; z[3][i]=_dir;
    }
} 
void printa() {
    printf("\n---------\n");
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            printf("%d%c", a[i][j], j+1<n?' ':'\n');
        }
    }
    printf("---------\n");
}
int main() {
    int w, t, tt, d, f;
    char ct;
    char _mov[10010];
    scanf("%d", &n);
    scanf("%s", _mov+1);
    scanf("%d %d", &py, &px);
    py--; px--;
    scanf("%d", &w);
    for(int i=0;i<w;i++) {
        scanf("%d %d", &t, &tt);
        t--; tt--;
        a[t][tt]=-1;
    }
    scanf("%d", &zind);
    for(int i=0;i<zind;i++) {
        for(int j=0;j<5;j++) {
            if(j-3) scanf(" %d", &z[j][i]);
            else {
                scanf(" %c", &ct);
                z[j][i]=mov2int(ct);
            }
            if(j<2) z[j][i]--;
        }
    }
    scanf("%d", &d);

    f=0;
    int i;
    for(i=1;_mov[i]&&!f&&i<=d;i++) {
        //printa();
        mov_ply(mov2int(_mov[i]));
        mov_zom(i);
        //printa();
        if(a[py][px]==i) f=1;
    }
    if(f) printf("%d\nDEAD...", i-1);
    else printf("ALIVE!");
}