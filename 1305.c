#include <stdio.h>
int main() {
    long long int T, b, i, sum=0, tsum=0;
    scanf("%lld", &T);
    long long int a[T];
    for(i=0;i<T;i++) {
        scanf("%lld", &a[i]);
    }
    scanf("%lld", &b);
    for(i=0;i<T;i++) {
        tsum=a[i]%b?(a[i]/b+1)*b:(a[i]/b)*b;
        sum+=tsum;
    }
    printf("%lld", sum);
}