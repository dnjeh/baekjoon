#include <stdio.h>
int main() {
    int a, b, c, d, e, ans=0;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    if(a<0) {
        ans+=c*-1*a;
        a=0;
    }
    if(a==0) {
        ans+=d;
    }
    if(a<b) {
        ans+=(b-a)*e;
    }
    printf("%d", ans);
}