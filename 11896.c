#include <stdio.h>
long long int fun(long long int t) {
    return (t/2*(t/2+1))-(t>=2?2:0);
}
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%lld", fun((long long int)b)-fun((long long int)(a-1)));
    return 0;
}
