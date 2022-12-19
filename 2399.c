#include <stdio.h>
int main() {
    long long int n, i, j, sum=0;
    scanf("%lld", &n);
    long long int a[n];
    for(i=0;i<n;i++) {
        scanf("%lld", &a[i]);
    }
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            sum+=(a[i]-a[j])<0?(a[i]-a[j])*-1:(a[i]-a[j]);
        }
    }
    printf("%lld", sum);
}