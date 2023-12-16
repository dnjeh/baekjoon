#include <stdio.h>
int main() {
    long long int n, i;
    scanf("%lld", &n);
    for(i=1;n>=i;i++) {
        n-=i;
    }
    printf("%lld", i-1);
}