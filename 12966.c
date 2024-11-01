#include <stdio.h>
#include <math.h>
long long int ispow(long long int a)  {
    for(long long int i=0;i*i<=a;i++) {
        if(i*i==a) return i;
    }
    return -1;
}
int main() {
    long long int a, b, t, cnt=0, f=0;
    scanf("%lld %lld", &a, &b);
    if((t=ispow(a+b))!=-1) {
        for(;t>=0&&!f;t--) {
            if(t&&a-(t*2-1)!=2&&t*2-1<=a) {
                a-=t*2-1;
                cnt++;
            }
            if(!a) f=1;
        }
    }
    if(f) printf("%lld", cnt);
    else printf("-1");
}