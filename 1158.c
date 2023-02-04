#include <stdio.h>
int main() {
    int n, k, i, j, cnt=0, now=0;
    scanf("%d %d", &n, &k);
    int a[2][n+1];
    for(i=0;i<n;i++) a[0][i]=i+1;
    a[0][i]=0;
    printf("<");
    for(i=0;(cnt/k)<n;i++) {
        now=0;
        for(j=0;a[i%2][j];j++) {
            if(!(++cnt%k)) {
                printf("%d, ", a[i%2][j]);
            }
            else {
                a[(i+1)%2][now++]=a[i%2][j];
            }
            if(!a[i%2][j+1]) a[(i+1)%2][now]=0;
        }
    }
    printf("\b\b>");
}