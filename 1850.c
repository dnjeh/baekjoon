#include <stdio.h>
long long int fun(long long int a, long long int b) {
    return !(a%b)?b:fun(b, a%b); 
}
int main() {
    long long int a, b, i, min, max;
    scanf("%lld %lld", &a, &b);
    min=fun(a, b);
    for(i=0;i<min;i++) {
        printf("1");
    }
}