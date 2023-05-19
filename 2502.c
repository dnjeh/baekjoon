#include <stdio.h>
int mem[31];
int dp(int _i) {
    int ret;
    if(mem[_i]) ret=mem[_i];
    else ret=dp(_i-1)+dp(_i-2);
    return ret;
}
int main() {
    int x, y, a, b, i, t;
    scanf("%d %d", &a, &b);
    for(x=1;;x++) {
        for(y=x;;y++) {
            for(i=0;i<=30;i++) mem[i];
            mem[1]=x;
            mem[2]=y;
            if((t=dp(a))==b) {
                printf("%d\n%d", x, y);
                return 0;
            }
            else if(t>b) break;
        }
    }
}   