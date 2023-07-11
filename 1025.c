#include <stdio.h>
#include <math.h>
int main() {
    int i, j, di, dj, ii, jj, n, m, max=-1, t, tt, cnt=0, mcnt;
    scanf("%d %d", &n, &m);
    int a[n][m];
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            scanf("%1d", &a[i][j]);
        }
    }
    for(mcnt=1;mcnt<10;mcnt++) {
        for(i=0;i<n;i++) for(j=0;j<m;j++) {
            for(di=1-n;di<n;di++) for(dj=1-m;dj<m;dj++) {
                t=a[i][j]; cnt=0;
                if(di||dj) { t=0;
                    for(ii=i, jj=j;ii>=0&&ii<n&&jj>=0&&jj<m&&cnt<mcnt;ii+=di, jj+=dj) {
                        cnt++;
                        t=t*10+a[ii][jj];
                    }
                }
                if((tt=(int)sqrt(t))*tt==t&&max<t) max=t;
            }
        }
    }
    printf("%d", max);
}