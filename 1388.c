#include <stdio.h>
int main() {
    int n, m, i, j, _i, _j, cnt=0;
    scanf("%d %d", &n, &m);
    char a[n][m];
    int b[n][m];
    for(i=0;i<n;i++) for(j=0;j<m;j++) b[i][j]=0;
    for(i=0;i<n;i++) scanf("%s", &a[i]);
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            if(!b[i][j]&&a[i][j]=='-') {
                cnt++;
                for(_j=j;_j<m&&a[i][_j]=='-';_j++) {
                    b[i][_j]=1;
                }
            }
            else if(!b[i][j]) {
                cnt++;
                for(_i=i;_i<n&&a[_i][j]=='|';_i++) {
                    b[_i][j]=1;
                }
            }
        }
    }
    printf("%d", cnt);
}