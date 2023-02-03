#include <stdio.h>
int main() {
    int n, m, t, tt, i, j;
    scanf("%d", &n);
    int a[n]; //스위치 배열
    for(i=0;i<n;i++) scanf("%d", &a[i]);
    scanf("%d", &m);
    for(i=0;i<m;i++) {
        scanf("%d %d", &t, &tt);
        if(t==1) {
            for(j=tt-1;j<n;j+=tt) {
                a[j]=!a[j];
            }
        }
        else {
            for(j=tt-1;j>=0&&((tt-1)*2-j)<n&&a[j]==a[(tt-1)*2-j];j--) {
                a[j]=a[(tt-1)*2-j]=!a[j];
            }
        }
    }
    for(i=0;i<n;i++) {
        printf("%d ", a[i]);
        if(!((i+1)%20)) printf("\n");
    }
}