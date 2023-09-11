#include <stdio.h>
long long int a, b;
long long int fun(long long int t) {
    long long int i, ret=0, tt, ttt;
    for(i=1;;i<<=1) {
        tt=t-(i-1);
        if(tt<=0) break;
        tt/=(i*2);
        ret+=tt*i;
        
        tt=(t-(i-1))%(i*2);
        ret+=tt>=i?i:tt;
    }
    return ret;
}
int main() {
    int i;
    scanf("%lld %lld", &a, &b);
    printf("%lld", fun(b)-fun(a-1));
}
