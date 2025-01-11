#include <stdio.h>
#include <math.h>
int mem[100001]={0, 1, 2, 3, 4};
void min(int* t, int tt) {
    if(tt<*t) *t=tt;
}
int dp(int t) {
    int ret=1000000;
    if(mem[t]) ret=mem[t];
    else {
        for(int i=10;i<=t;i*=10) {
            if((t%i)/(i/10)) min(&ret, dp(t/i)+dp(t%i));
        }
        int n=((int)sqrt(t))+2;
        for(int i=2;i<=n;i++) {
            if(!(t%i)) min(&ret, dp(t/i)+dp(i));
        }
        for(int i=1;i<=t-i;i++) {
            min(&ret, dp(i)+dp(t-i));
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
