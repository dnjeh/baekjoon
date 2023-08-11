#include <stdio.h>
int mem[31] = {1, 0, 3, };
int dp(int t) {
    int ret=0;
    if(t<=1||mem[t]) ret=mem[t];
    else {
        if(t-2>=0) ret+=dp(t-2);
        for(int i=2;t-i>=0;i+=2) {
            ret+=dp(t-i)*2;
        }
        mem[t]=ret;
    }
    return ret;
}   
int main() {
    int n;
    scanf("%d", &n);
    printf("%d", dp(n));
}