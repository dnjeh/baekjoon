#include <stdio.h>
int main() {
    int i, n, j, k, cnt=0, b[27], c[27];
    scanf("%d", &n);
    char a[n][51];
    for(i=0;i<n;i++) scanf("%s", a[i]);
    for(i=0;i<n-1;i++) {
        for(j=i+1;j<n;j++) {
            for(k=0;k<27;k++) {
                b[k]=0;
                c[k]=0;
            }
            for(k=0;a[i][k];k++) {
                if(!b[a[i][k]-96]&&!c[a[j][k]-96]) {
                    b[a[i][k]-96]=a[j][k]-96;
                    c[a[j][k]-96]=1;
                }
                else if(!b[a[i][k]-96]&&c[a[j][k]-96]) break;
                else if((b[a[i][k]-96])!=(a[j][k]-96)) {
                    break;
                }
            }
            if(!a[i][k]) cnt++;
        }
    }
    printf("%d", cnt);
}