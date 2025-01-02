#include <stdio.h>
#define MOD 1000000007
int mem[3][3][1001], mem2[3][1001];
void mod(int* tt, int t) {
    *tt=(int)((*tt+(long long int)t+MOD)%MOD);
}
int dp(int dus, int h, int now) {
    int ret=0, *_mem=&mem[dus][h][now];
    if(*_mem!=-1) ret=*_mem;
    else {
        if(dus==2&&h) mod(&ret, dp(dus-1, h>1?1:2, now-1));
        else if(dus<2) mod(&ret, dp(0, 0, now-1));
        *_mem=ret;
    }
    return ret;
}
int dp2(int dus, int now) {
    int ret=0, *_mem=&mem2[dus][now];
    if(*_mem!=-1) ret=*_mem;
    else {
        if(!dus) {
            mod(&ret, dp2(1, now-1));
            mod(&ret, dp2(2, now-1));
        }
        if(dus<2) mod(&ret, dp2(0, now-1));
        *_mem=ret;
    }
    return ret;
}
void set(int n);
void set2(int n);
int main() {
    int n, ans=0;
    scanf("%d", &n);
    set(n);
    set2(n);
    for(int i=0;i<3;i++) {
        mod(&ans, -dp2(i, n));
    }
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            if(i&&!j) continue;
            if(!i&&j) continue;
            mod(&ans, dp(i, j, n));
        }
    }
    printf("%d", ans);
}
void set(int n) {
    for(int i=0;i<3;i++) for(int j=0;j<3;j++) for(int k=1;k<=n;k++) {
        int *_mem=&mem[i][j][k];
        if(k!=1) *_mem=-1;
        else if(!i&&!j) *_mem=1;
        else *_mem=0;
    }
}
void set2(int n) {
    for(int i=0;i<3;i++) {
        for(int j=1;j<=n;j++) {
            if(j-1) mem2[i][j]=-1;
            else if(!i) mem2[i][j]=1;
            else mem2[i][j]=0;
        }
    }
}