#include <stdio.h>
#include <string.h>
char t[2510];
int a[2500], mem[2500][2500], vis[2500], n, m;
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
int main() {
    int i, j, cnt=0, k;
    scanf("%s", t);
    n=strlen(t);
    set();
    for(i=0;i<n;i++) {
        a[i]=t[i];
    }
    for(i=n-1;i>=0;i--) {
        for(j=0;j+i<n;j++) {
            if(!vis[j]&&!vis[j+i]&&dp(j, j+i)) {
                for(k=j;k<=j+i;k++) {
                    vis[k]=1;
                } 
                cnt++;
            }
        }
    }
    printf("%d", cnt);
}
void set() {
    int i, j;
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) mem[i][j]=-1;
        mem[i][i]=1;
    }
}