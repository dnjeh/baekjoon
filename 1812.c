#include <stdio.h>
int main() {
    int n, i;
    scanf("%d", &n);
    int a[n], b[n], c;
    for(i=0;i<n;i++) a[i]=b[i]=0;
    for(i=0;i<n;i++) {
        scanf("%d", &a[i]);
        if(i) {
            b[i]=a[i-1];
            b[i]-=b[i-1];
        }
    }
    c=a[n-1]-(b[n-1]+a[n-1])/2;
    printf("%d\n", c);
    for(i=0;(i+1)<n;i++) {
        printf("%d\n", !i?(a[i]-=c):(a[i]-=a[i-1]));
    }
}