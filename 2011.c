#include <stdio.h>
#include <string.h>
int mem[5001], n;
char a[5050];
void set();
int dp(int t) {
    int ret=0;
    if(mem[t]!=-1) ret=mem[t];
    else {
        if(a[t]>'0') ret=(ret+dp(t+1))%1000000;
        if(t<n-1&&(a[t]=='1'||a[t]=='2'&&a[t+1]<='6')) ret=(ret+dp(t+2))%1000000;
        mem[t]=ret;
    }
    return ret;
}
int main() {
    scanf("%s", a);
    n=strlen(a);
    set();
    printf("%d", dp(0));
}
void set() {
    int i; mem[n]=1;
    for(i=0;i<n;i++) {
        mem[i]=-1;
    }
}