#include <stdio.h>
int n, m, a[10][10], q[4][300000], vis[10][10][10][10], qind=1;
int hole[2];
void qput(int ry, int rx, int by, int bx) {
    vis[ry][rx][by][bx]=1;
    q[0][qind]=ry;
    q[1][qind]=rx;
    q[2][qind]=by;
    q[3][qind]=bx;
    qind++;
}
void printa(int t) {
    int i, j;
    printf("\n---------\n");
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            printf("%c", i==q[0][t]&&j==q[1][t]?'R':i==q[2][t]&&j==q[3][t]?'B':a[i][j]==-1?'O':a[i][j]?'#':' ');
        }
        printf("\n");
    }
    printf("----------\n");
}
int main() {
    int i, j, ind, ans=-1, f=0, now;
    int ry, rx, by, bx, _rx, _ry, _bx, _by;
    int dy, dx;
    char t[11];
    scanf("%d %d\n", &n, &m);
    for(i=0;i<n;i++) {
        scanf("%s", t);
        for(j=0;j<m;j++) {
            switch(t[j]) {
                case '#':
                    a[i][j]=1;
                    break;
                case 'O':
                    a[i][j]=-1;
                    break;
                case 'R':
                    q[0][0]=i;
                    q[1][0]=j;
                    break;
                case 'B':
                    q[2][0]=i;
                    q[3][0]=j;
                    break;
            }
        }
    }
    i=0;
    for(now=0;!f&&now<=10;now++) {
        for(ind=qind;!f&&i<ind;i++) {
            printa(i);
            ry=q[0][i]; rx=q[1][i]; by=q[2][i]; bx=q[3][i];
            if(by==-1&&bx==-1) {
                continue;
            }
            else if(ry==-1&&rx==-1) {
                ans=now;
                f=1;
            }
            else if(now<10) {
                for(j=0;j<4;j++) {
                    dx=j/2?0:j%2?-1:1; dy=j/2?j%2?-1:1:0;
                    for(_rx=rx, _ry=ry;_rx>=0&&_rx<m&&_ry>=0&&_ry<n;_rx+=dx, _ry+=dy) {
                        if(a[_ry][_rx]==1) {
                            _rx-=dx;
                            _ry-=dy;
                            break;
                        }
                        else if(a[_ry][_rx]==-1) {
                            _rx=-1;
                            _ry=-1;
                            break;
                        }
                    }
                    for(_bx=bx, _by=by;_bx>=0&&_bx<m&&_by>=0&&_by<n;_bx+=dx, _by+=dy) {
                        if(a[_by][_bx]==1) {
                            _bx-=dx;
                            _by-=dy;
                            break;
                        }
                        else if(a[_by][_bx]==-1) {
                            _bx=-1;
                            _by=-1;
                            break;
                        }
                    }
                    if(_rx!=-1&&(_rx==_bx&&_ry==_by)) {
                        if(((dy&&by-ry<dy)||(dx&&bx-rx<dx))) {_ry-=dy; _rx-=dx; }
                        else { _by-=dy; _bx-=dx; }
                    }
                    qput(_ry, _rx, _by, _bx);
                } 
            }
        }
    }
    printf("%d", ans);
}