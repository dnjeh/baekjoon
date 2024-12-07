#include <stdio.h>
#include <stdlib.h>
#define SIX 1000000
int mem[100010];
long long int a[200050], ind;
int compare(const void *a, const void *b) {
    long long int t = (*(long long int*)a-*(long long int*)b);
    return t>0?1:t<0?-1:0;
}
int lbs(long long int end) {
    long long int up, dwn, mid;
    up=ind; dwn=0;
    for(mid=(dwn+up)/2;dwn<up;mid=(dwn+up)/2) {
        if(a[mid]<end) dwn=mid+1;
        else up=mid;
    }
    return up;
}
int dfs(long long int to, long long int from) {
    int ret=1;
    if(mem[to]) ret=mem[to];
    else {
        int i, sta=lbs(to*(long long int)SIX), end=lbs((to+1)*(long long int)SIX);
        for(i=sta;i<end;i++) {
            if(a[i]%SIX!=from) {
                ret+=dfs(a[i]%SIX, to);
            }
        }
        mem[to]=ret;
    }
    return ret;
}
int main() {
    long long int n, r, q, t, tt;
    scanf("%lld %lld %lld", &n, &r, &q);
    for(int i=0;i<n-1;i++) {
        scanf("%lld %lld", &t, &tt);
        a[ind++]=t*SIX+tt;
        a[ind++]=tt*SIX+t;
    }
    qsort(a, ind, sizeof(a[0]), compare);
    dfs(r, 0);
    for(int i=0;i<q;i++) {
        scanf("%d", &t);
        printf("%d\n", mem[t]);
    }
}