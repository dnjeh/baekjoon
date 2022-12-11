#include <stdio.h>
int main() {
    long long int a, b, c, sum[2]={0}, i;
    scanf("%lld %lld %lld", &a, &b, &c);
    if(b>=c) {
        printf("-1");
    }
    else {
        i=c-b;
        printf("%lld", (int)((double)a/i)+1);
    }
}