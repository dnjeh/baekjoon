#include <stdio.h>
int mem[1001] = {0, 1};
int dp(int t) {
    int ret=1;
    if(mem[t]) ret=mem[t];
    else {
        for(int i=t/2;i>=1;i--) {
            ret+=dp(i);
        }
        mem[t]=ret;
    }
    return ret;
}
int main() {
    int T, t;
    scanf("%d", &T);
    for(int i=0;i<T;i++) {
        scanf("%d", &t);
        printf("%d\n", dp(t));
    }
}