#include <stdio.h>
int main() {
    long long int a[4]={1, 1, 1, 2}, T, n, i, j, t;
    scanf("%lld", &T);
    for(i=0;i<T;i++) {
        a[0]=a[1]=a[2]=1;
        a[3]=2;
        scanf("%lld", &n);
        for(j=1;j<n;j++) {
            a[0]=a[1];
            a[1]=a[2];
            a[2]=a[3];
            a[3]=a[0]+a[1];
        }
        printf("%lld\n", *a);
    }
}