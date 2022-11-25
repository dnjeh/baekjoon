#include <stdio.h>
int main() {
    long long int sum=(long long int)0, mum=(long long int)1, i, j, n;
    char t;
    scanf("%lld", &n);
    fflush(stdin);
    for(i=0;i<n;i++) {
        scanf("%c", &t);
        t-=96;
        mum=(long long int)t;
        for(j=0;j<i;j++) {
            mum*=(long long int)31;
            mum%=(long long int)1234567891;
        }
        sum+=mum;
        sum%=(long long int)1234567891;
    }
    printf("%lld", sum);
}