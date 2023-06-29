#include <stdio.h>
int main() {
    int n, m, a[50][50], b[50][50];
    int i, j, k, kk, cnt=0;
    scanf("%d %d", &n, &m);
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            scanf("%1d", &a[i][j]);
        }
    }
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            scanf("%1d", &b[i][j]);
        }
    }
    for(i=0;i<n-2;i++) for(j=0;j<m-2;j++) {
        if(a[i][j]!=b[i][j]) {
            for(k=i;k<i+3;k++) for(kk=j;kk<j+3;kk++) {
                b[k][kk]=!b[k][kk];
            }
            cnt++;
        }
    }
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            if(a[i][j]!=b[i][j]) {
                printf("-1");
                return 0;
            }
        }
    }
    printf("%d", cnt);
}