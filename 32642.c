#include <stdio.h>
int main() {
    long long int n, sum=0, t, now=0;
    scanf("%lld", &n);
    for(int i=0;i<n;i++) {
        scanf("%lld", &t);
        if(t) now++;
        else now--;
        sum+=now;
    }
    printf("%lld", sum);
}