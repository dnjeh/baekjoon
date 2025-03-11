#include <stdio.h>
int main() {
    long long int n, k;
    scanf("%lld %lld", &n, &k);
    long long int now=1, won=n;
    for(long long int i=0;i<n;i++) {
        if(k>=n-i-1) {
            printf("%lld", won--);
            k-=n-i-1;
        }
        else printf("%lld", now++); 
        if(i+1<n) printf(" ");
    }
}