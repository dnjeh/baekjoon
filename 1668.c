#include <stdio.h>
int main() {
    int i, n, t=0, tsum=0;
    scanf("%d", &n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d", &a[i]);
        if(a[i]>t) {
            t=a[i];
            tsum++;
        }
    }
    printf("%d\n", tsum);
    t=tsum=0;
    for(i=n-1;i>=0;i--) {
        if(a[i]>t) {
            t=a[i];
            tsum++;
        }
    }
    printf("%d\n", tsum);
}