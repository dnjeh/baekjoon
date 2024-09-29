#include <stdio.h>
int a[50][50], cld[2][2510], cind, n, ccnt, vis[50][50], now;
void cput(int y, int x) {
    cld[0][cind]=y;
    cld[1][cind++]=x;
}
void cclear() {
    cind=0;
}
void cprint() {
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
void cmove(int d, int s) {
    int dx=((d%8%4!=3)?(d%8<4?-1:1):0)*(s), dy=(((d-1)%4!=0)?(d-1<4?-1:1):(0))*(s), *_y, *_x;
    for(int i=0;i<cind;i++) { 
        _y=&cld[0][i]; _x=&cld[1][i];
        *_y=(*_y+dy+n*30)%n;
        *_x=(*_x+dx+n*30)%n;
        vis[*_y][*_x]=now;
        a[*_y][*_x]++;
        ccnt++;
    }
}
void ccopy() {
    int _y, _x, dy, dx, t=0;
    for(int i=0;i<cind;i++) { 
        t=0; _y=cld[0][i]; _x=cld[1][i];
        for(int j=0;j<4;j++) {
            dy=(j<=1?-1:1); dx=(!(j%3)?-1:1);
            if(_y+dy>=0&&_y+dy<n&&_x+dx>=0&&_x+dx<n&&a[_y+dy][_x+dx]) t++;
        }
        a[_y][_x]+=t;
        ccnt+=t;
    }
}
void cinit() {
    cclear();
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(a[i][j]>=2&&vis[i][j]!=now) {
                cput(i, j);
                a[i][j]-=2;
                ccnt-=2;
            }
        }
    }
}
int main() {
    int m, d, s;
    scanf("%d %d", &n, &m);
    cput(n-1, 0); cput(n-1, 1);
    cput(n-2, 0); cput(n-2, 1);
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            scanf("%d", &a[i][j]);
            ccnt+=a[i][j];
        }
    }
    for(now=1;now<=m;now++) {
        scanf("%d %d", &d, &s);
        cmove(d, s);
        ccopy();
        cinit();
        //cprint();
    }
    printf("%d", ccnt);
}