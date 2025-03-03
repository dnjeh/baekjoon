#include <stdio.h>
#define LL long long 
#define MOD 1000000
#define HASH_MOD 10007
LL int mem[2][3][HASH_MOD];
LL int mod(LL int t) {
    return t%MOD;
}
int hash(LL int t) {
    LL int ret=5381;
    for(int i=t;;i/=10) {
        if(!i) i=t;
        ret=(ret*33+i%10)%HASH_MOD;
        if(!mem[1][2][ret]||mem[1][2][ret]==t) break;
    }
    if(!mem[1][2][ret]) {
        mem[1][2][ret]=t;
    }
    return ret;
}
int fun(LL int t, LL int tt[][2]) {
    if(mem[1][1][hash(t)]) {
        for(int i=0;i<4;i++) {
            tt[i/2][i%2]=mem[i/2][i%2][hash(t)];
        }
        return tt[0][1];
    }
    LL int _a[2][2]={{0, }}, _b[2][2]={{0, }};
    fun(t/(LL int)2, _a); 
    fun(t/(LL int)2+t%(LL int)2, _b);
    int ht=hash(t);
    mem[0][0][ht]=tt[0][0]=mod(mod(_a[0][0]*_b[0][0])+mod(_a[0][1]*_b[1][0]));
    mem[0][1][ht]=tt[0][1]=mod(mod(_a[0][0]*_b[0][1])+mod(_a[0][1]*_b[1][1]));
    mem[1][0][ht]=tt[1][0]=mod(mod(_a[1][0]*_b[0][0])+mod(_a[1][1]*_b[1][0]));
    mem[1][1][ht]=tt[1][1]=mod(mod(_a[1][0]*_b[0][1])+mod(_a[1][1]*_b[1][1]));
    return tt[0][1];
}
void set();
int main() {
    LL int a[2][2];
    LL int n;
    set();
    scanf("%lld", &n);
    printf("%lld", fun(n, a));
}
void set() {
    int t=hash(1);
    mem[0][0][t]=0;
    mem[0][1][t]=mem[1][0][t]=mem[1][1][t]=1;
}