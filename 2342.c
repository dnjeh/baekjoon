#include <stdio.h>
#define INF 2000000000
int a[100000], mem[5][5][100000], aind;
int abs(int t) { return t<0?t*-1:t; }
int f(int t, int tt) {
    int _t=abs(t-tt);
    if(!(t*tt)) return 2;
    else if(!_t) return 1;
    else if(_t==2) return 4;
    else return 3;
}
int dp(int l, int r, int t) {
    int ret=INF, _t;    
    if(mem[l][r][t]||t==aind) ret=mem[l][r][t];
    else if(l&&l==r) ret=INF;
    else {
        if(ret>(_t=(dp(a[t], r, t+1)+f(l,a[t])))) ret=_t;
        if(ret>(_t=(dp(l, a[t], t+1)+f(r,a[t])))) ret=_t;
        mem[l][r][t]=ret;
    }
    return ret;
}
int main() {
    int t;
    for(scanf("%d", &t);t;scanf("%d", &t)) {
        a[aind++]=t;
    }
    printf("%d", dp(0, 0, 0));
}
