#include <stdio.h>
#define LL long long 
#define MOD 1000
#define HASH_MOD 10007
int mem[5][7][HASH_MOD];
int mod(int t) {
    return t%MOD;
}
int hash(LL int t) {
    int ret=5381;
    for(LL int i=t;;i/=10) {
        if(!i) i=t;
        ret=(ret*33+(int)(i%10))%HASH_MOD;
        if(!mem[4][5][ret]||mem[4][5][ret]==t) break;
    }
    if(!mem[4][5][ret]) {
        mem[4][5][ret]=t;
    }
    return ret;
}
void fun(LL int t, int tt[][5], int n) {
    int ht=hash(t);
    if(mem[4][6][ht]) {
        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++) {
               tt[i][j]=mem[i][j][ht];
            }
        }
        return;
    }
    int _a[5][5]={{0, }}, _b[5][5]={{0, }};
    fun(t/(LL int)2, _a, n); 
    fun(t/(LL int)2+t%(LL int)2, _b, n);
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            for(int k=0;k<n;k++) {
                mem[i][j][ht]=tt[i][j]=mod(tt[i][j]+_a[i][k]*_b[k][j]);
            }
        }
    }
    mem[4][6][ht]=1;
}
void set();
int main() {
    int a[5][5], b[5][5]={{0, }, };
    LL int n, m;
    scanf("%d %lld", &m, &n);
    for(int i=0;i<m;i++) {
        for(int j=0;j<m;j++) {
            scanf("%d", &a[i][j]);
        }
    }
    set(m, a);
    fun(n, b, m);
    for(int i=0;i<m;i++) {
        for(int j=0;j<m;j++) {
            printf("%d%c", mod(b[i][j]), j+1<m?' ':'\n');
        }
    }
}
void set(int n, int a[][5]) {
    int t=hash(1);
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            mem[i][j][t]=a[i][j];
        }
    }
    mem[4][6][t]=1;
}