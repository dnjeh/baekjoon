#include <stdio.h>
#include <stdlib.h>
#define LL long long 
#define TEN 10000000000 
#define FOR 10000
LL int a[4100], ind, b[2][2000], c[2000][2000], n, max;
int compare(const void *a, const void *b) {
    if(*(LL int*)a<*(LL int*)b) return -1;
    if(*(LL int*)a>*(LL int*)b) return 1;
    return 0;
}
void swap(LL int* a, LL int* b) {
    LL int t;
    t=*a;
    *a=*b;
    *b=t;
} 
long long int lbs(long long int end) {
    long long int up, dwn, mid;
    up=ind; dwn=0;
    for(mid=(dwn+up)/2;dwn<up;mid=(dwn+up)/2) {
        if(a[mid]<end) dwn=mid+1;
        else up=mid;
    }
    return up;
}
LL int dfs(LL int to, LL int from, LL int one, LL int two) {
    LL int sta=lbs(to*TEN*FOR), end=lbs((to+1)*TEN*FOR);
    LL int tm[2]={0, };
    for(int i=sta;i<end;i++) {
        LL int _to=a[i]/TEN%FOR, w=a[i]%TEN;
        if((!(one==to&&two==_to||one==_to&&two==to))&&_to!=from) {
            LL int t=dfs(_to, to, one, two)+w;
            if(t>tm[1]) tm[1]=t;
            if(tm[1]>tm[0]) swap(&tm[0], &tm[1]);
        }
    }
    if(tm[0]+tm[1]>max) max=tm[0]+tm[1];
    return tm[0];
}
int main() {
    LL int t, tt, ttt, ans=0;
    scanf("%d", &n);
    for(int i=0;i<n-1;i++) {
        scanf("%lld %lld %lld", &t, &tt, &ttt);
        a[ind++]=t*FOR*TEN+tt*TEN+ttt;
        a[ind++]=tt*FOR*TEN+t*TEN+ttt;
        b[0][i]=t;
        b[1][i]=tt;
        c[t][tt]=ttt;
        c[tt][t]=ttt;
    }
    qsort(a, ind, sizeof(a[0]), compare);
    for(int i=0;i<n-1;i++) {
        t=b[0][i]; tt=b[1][i]; 
        ttt=c[t][tt];
        for(int j=0;j<2;j++) {
            max=0;
            dfs(((!j)?tt:t), -1, t, tt);
            ttt+=max;
        }
        if(ttt>ans) ans=ttt;
    } 
    printf("%lld", ans);
}