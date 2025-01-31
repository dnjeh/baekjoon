#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MOD 30000019
#define EIG 100000000
#define LL long long
char b[2000010][13], c[1000100][13];
int a[MOD], vis[MOD], cvis[1000100], qind, cind, bind=1, dind, n;
LL int d[1000100];
void mod(LL int *t, LL int tt) {
    *t=(tt%MOD);
}
LL int fun(char *t) {
    LL int ret=5381;
    for(int i=0;t[i];i++) {
        mod(&ret, ret*33+t[i]);
    }
    return ret;
}
int compare(const void *a, const void *b) {
    LL int t=*(LL int*)a - *(LL int*)b;
    return t>0?1:t<0?-1:0;
}
int compare2(const void *a, const void *b) {
	return strcmp((char *)a, (char *)b);
}
LL int lbs(LL int end) {
    LL int up, dwn, mid;
    up=dind; dwn=0;
    for(mid=(dwn+up)/2;dwn<up;mid=(dwn+up)/2) {
        if(d[mid]<end) dwn=mid+1;
        else up=mid;
    }
    return up;
}
void dfs(LL int to, int f) {
    if(vis[to]) return;
    vis[to]=1;
    if(f&&!cvis[a[to]]) {
        cvis[a[to]]=1;
        strcpy(c[cind++], b[a[to]]);
    }
    LL int sta=lbs(to*EIG), end=lbs((to+1)*EIG);
    for(LL int i=sta;i<end;i++) {
        LL int will=d[i]%EIG;
        if(!vis[will]) dfs(will, 1);
    }
}
int main() {
    char t[15], tt[15];
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf(" %s is %s", t, tt);
        if(!strcmp(t, tt)) continue;
        if(!a[fun(t)]) {
            a[fun(t)]=bind;
            strcpy(b[bind++], t);
        }
        if(!a[fun(tt)]) {
            a[fun(tt)]=bind;
            strcpy(b[bind++], tt);
        }
        d[dind++]=fun(t)*EIG+fun(tt);
    }
    //for(int i=0;i<n;i++) {
    //    printf("%lld\n", d[i]);
    //}
    qsort(d, n, sizeof(d[0]), compare);
    if(a[fun("Baba")]) dfs(fun("Baba"), 0);
    qsort(c, cind, sizeof(c[0]), compare2);
    for(int i=0;i<cind;i++) {
        printf("%s\n", c[i]);
    }
    return 0;
}