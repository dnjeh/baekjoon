#include <stdio.h>
int n, m, a[10][10], q[4][100000], vis[10][10][10][10], qind;
int hole[2];
void qput(int ry, int rx, int by, int bx) {
    q[0][qind]=ry;
    q[1][qind]=rx;
    q[2][qind]=by;
    q[3][qind]=bx;
    qind++;
}
int main() {
    int i, j, ind, ans=-1, f=0, now;
    int ry, rx, by, bx;
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
                    hole[0]=i;
                    hole[1]=j;
                    break;
                case 'R':
                    q[0][0]=i;
                    q[0][1]=j;
                    break;
                case 'B':
                    q[0][2]=i;
                    q[0][3]=j;
                    break;
            }
        }
    }
    i=0;
    for(now=0;!f&&now<=10;now++) {
        for(ind=qind;!f&&i<ind;i++) {
            ry=q[0][i]; rx=q[1][i]; by=q[2][i]; bx=q[3][i];
            if(ry==-1&&rx==-1) {
                ans=now;
                f=1;
            }
            else if(now<10) {
                
            }
        }
    }
    printf("%d", ans);
}