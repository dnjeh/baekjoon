#include <stdio.h>
int fun(int t) {
    int ret=0;
    for(;t;t/=10) {
        if(t%10==3||t%10==6||t%10==9) ret++;
    }
    return ret;
}
int main() {
    int n, ans=0;
    scanf("%d", &n);
    for(int i=1;i<=n;i++) {
        ans+=fun(i);
    }
    printf("%d", ans);
}