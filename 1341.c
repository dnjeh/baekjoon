#include <stdio.h>
int main() {
    long long int a, b, aa, bb, sum=1, i;
    scanf("%lld %lld", &a, &b);
    for(i=0;i<60;i++, sum+=1LL<<i) {
        if(!(sum%b)) {
            aa=a*(sum/b);
            bb=sum/b;
            break;
        }
    }
    if(i==60) {
        printf("-1");
        return 0;
    }

    for(;i>=0;i--) {
        printf("%c", (aa&(1LL<<i))?'*':'-');
    }
}