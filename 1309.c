#include <stdio.h>
int mem[100001]={1, 3, 7, 17, };
int dp(int _t) {
    int ret;
    if(mem[_t]) ret=mem[_t];
    else {
        ret=(dp(_t-1)*2+dp(_t-2))%9901;
        mem[_t]=ret;
    }
    return ret;
}
int main() {
    int n;
    scanf("%d", &n);
    printf("%d", dp(n));
}