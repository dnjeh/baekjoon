#include <stdio.h>
#include <string.h>
#define INF 200000000
char t[2510];
int a[2500], mem[2500][2500], vis[2500], n, m;
int memm[2500]={1, };
void set();
int dp(int t, int tt) {
    int ret=0;
    if(mem[t][tt]!=-1) ret=mem[t][tt];
    else {
        if(tt-t<=1) {
            if(a[t]==a[tt]) ret=1;
            else ret=0;
        }
        else {
            if(dp(t+1, tt-1)&&a[t]==a[tt]) ret=1;
            else ret=0;
        }
        mem[t][tt]=ret;
    }
    return ret;
}
int dpp(int t) {
    int ret=INF, _t, i;
    if(memm[t]) ret=memm[t];
    else {
        for(i=0;i<=t;i++) {
            if(dp(i, t)&&(ret>(i?(_t=dpp(i-1))+1:1))) {
                ret=i?(_t+1):1;
            }
        }
        memm[t]=ret;
    } 
    return ret;
}
int main() {
    int i, j, cnt=0, k;
    scanf("%s", t);
    n=strlen(t);
    set();
    for(i=0;i<n;i++) {
        a[i]=t[i];
    }
    printf("%d", dpp(n-1));
}
void set() {
    int i, j;
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) mem[i][j]=-1;
        mem[i][i]=1;
    }
}