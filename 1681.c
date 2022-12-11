#include <stdio.h>
int main() {
    long long int i, a, cnt=1, b, t, max;
    scanf("%lld %lld", &a, &b);
    for(i=0;i<a;i++) {
        for(t=cnt;t;t/=10) {
            if(t%10==b) {
                break; 
            }
        }
        if(t) {
            i--;
        }
        max=cnt;
        cnt++;
    }
    printf("%lld", max);
}