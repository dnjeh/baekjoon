#include <stdio.h>
#define LL long long 
LL int a[2000][2000], mem[2000], n, max;
void swap(LL int* a, LL int* b) {
    LL int t;
    t=*a;
    *a=*b;
    *b=t;
} 
LL int dfs(int to, int from) {
    LL int tm[2]={0, };
    for(int i=0;i<n;i++) {
        if(i!=from&&a[to][i]) {
            LL int t=dfs(i, to)+a[to][i];
            if(t>tm[1]) tm[1]=t;
            if(tm[1]>tm[0]) swap(&tm[0], &tm[1]);
        }
    }
    if(tm[0]+tm[1]>max) max=tm[0]+tm[1];
    mem[to]=tm[0];
    return tm[0];
}
void ddfs(int to, int from) {
    for(int i=0;i<n;i++) {
        if(i!=from&&a[to][i]) {
            ddfs(i, to);
        }
    }
    if(to) for(int i=0;i<n;i++) if(i!=from&&i!=to&&!a[to][i]) {
        swap(&a[to][from], &a[to][i]);
        swap(&a[from][to], &a[i][to]);
        dfs(0, -1);
        swap(&a[to][from], &a[to][i]);
        swap(&a[from][to], &a[i][to]);
    }
}

int main() {
    int t, tt, ttt;
    scanf("%d", &n);
    for(int i=0;i<n-1;i++) {
        scanf("%d %d %d", &t, &tt, &ttt);
        a[t][tt]=ttt;
        a[tt][t]=ttt;
    }
    ddfs(0, -1);
    printf("%lld", max);
}