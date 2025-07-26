#include <stdio.h>
#define LL long long
LL int abs(LL int a) {
    return a<0?a*-1:a;
}
int main() {
    LL int a[5]={0, }, sum=0, n;
    scanf("%lld", &n);
    for(int i=0;i<n;i++) {
        scanf("%lld", &a[i]);
    }
    sum+=a[0]>a[2]?abs(a[0]-a[2])*508:abs(a[0]-a[2])*108;
    sum+=a[1]>a[3]?abs(a[1]-a[3])*212:abs(a[1]-a[3])*305;
    sum+=a[4]*707;
    printf("%lld", sum*4763);
}