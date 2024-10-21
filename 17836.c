#include <stdio.h>
#include <stdlib.h>
int a[100][100], q[2][10100], qind, n, m;
void qput(int t, int tt) {
    a[t][tt]++;
    q[0][qind]=t;
    q[1][qind++]=tt;
}

void printa() {
    printf("-------\n");
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            printf("%d%c", a[i][j], j+1==m?'\n':' ');
        }
    }
    printf("-------\n");
}

int main() {
    int t, cnt, ind=0, g=9999999, f=0, i, x, y;
    scanf("%d %d %d", &n, &m, &t);
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            scanf("%d", &a[i][j]);
        }
    }
    qput(0, 0);
    for(i=cnt=0;cnt<=t&&cnt<g&&!f&&ind<qind;cnt++) {
        //printa();
        for(ind=qind;i<ind&&!f;i++) {
            y=q[0][i]; x=q[1][i];
            if(y==n-1&&x==m-1) {
                f=1;
            }
            else if(a[y][x]==3) {
                g=cnt+abs(y-(n-1))+abs(x-(m-1));
            }
            else {
                if(y-1>=0&&(!a[y-1][x]||a[y-1][x]==2)) qput(y-1, x);
                if(y+1<n&&(!a[y+1][x]||a[y+1][x]==2)) qput(y+1, x);
                if(x-1>=0&&(!a[y][x-1]||a[y][x-1]==2)) qput(y, x-1);
                if(x+1<m&&(!a[y][x+1]||a[y][x+1]==2)) qput(y, x+1);
            }
        }
    }
    cnt--;
    if(!f&&g>t) printf("Fail");
    else printf("%d", f&&cnt<g?cnt:g);
}