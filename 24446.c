#include <stdio.h>
#include <stdlib.h>
long long int a[400100], b[100000], ind, q[100100], vis[100000], qind;
int compare(const void *a, const void *b) {
    long long int t=*(long long int*)a - *(long long int*)b;
    return t>0?1:t<0?-1:0;
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
void qput(long long int t) {
    vis[t]=1;
    q[qind++]=t;
}
void bfs(long long int _sta) {
    long long int ret, i, ind=0;
    qput(_sta);
    for(i=ret=0;ind<qind;ret++) {
        for(ind=qind;i<ind;i++) {
            b[q[i]]=ret;
            long long int sta=lbs(q[i]*100000LL), end=lbs((q[i]+1)*100000LL);
            for(long long int j=sta;j<end;j++) {
                if(vis[a[j]%100000LL]) continue;
                qput(a[j]%100000LL);
            }
        }
    }
}
int main() {
    long long int n, m, r;
    long long int t, tt;
    scanf("%lld %lld %lld", &n, &m, &r);
    for(int i=0;i<m;i++) {
        scanf("%lld %lld", &t, &tt);
        t--; tt--;
        a[ind++]=t*100000+tt;
        a[ind++]=tt*100000+t;
    }
    qsort(a, ind, sizeof(a[0]), compare);
    bfs(--r);
    for(int i=0;i<n;i++) {
        printf("%lld\n", !b[i]?i==r?0:-1:b[i]); 
    }
}