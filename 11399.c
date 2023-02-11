#include <stdio.h>
long long int a[1001];
int main() {
    long long int n, i, sum=0, t, ssum=0;
    scanf("%lld", &n);
    for(i=0;i<n;i++) {
        scanf("%lld", &t);
        a[t]++;
    }
    for(i=1;i<=1000;i++) {
        if(a[i]) {
            a[i]--;
            sum+=i--;
            ssum+=sum;
        }
    }
    printf("%lld", ssum);
}