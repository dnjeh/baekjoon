#include <stdio.h>
int fun(int t) {
    int ret=0;
    if(t==0) return 1;
    for(;t;t/=10) {
        if(t%10==0) ret++;
    }   
    return ret;
}
int main() {
    int a, b, cnt, T;
    scanf("%d", &T);
    for(int i=0;i<T;i++) {
        cnt=0;
        scanf("%d %d", &a, &b);
        for(int j=a;j<=b;j++) {
            cnt+=fun(j);
        }
        printf("%d\n", cnt);
    }
}