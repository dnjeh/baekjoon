#include <stdio.h>
int main() {
    long long int n, a=1, t=0, b, t1=0;
    scanf("%lld", &n);
    for(;t<n;b=++a) {
        t1=0;
        for(;b;b/=10) {
            if(t1>=3) {
                break;
            }
            if(b%10==6) {
                t1++;
            }
            else {
                t1=0;
            }
        }
        if(t1>=3) {
            t++;
        }
    }
    printf("%d", a-1);
}