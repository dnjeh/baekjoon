#include <stdio.h>
#include <stdlib.h>
long long int a[200000][2], b[200000], c[200100];
int compare(const void* a, const void* b) {
    return (*(long long int(*)[2])a)[0]-(*(long long int(*)[2])b)[0];
}
int main() {
    long long int n, m, t, tt, ttt, _t, max=0, ind=0;
    scanf("%lld %lld", &n, &m);
    for(long long int i=0;i<n;i++) {
        scanf("%lld %lld", &t, &tt);
        a[i][0]=tt;
        a[i][1]=i;
    }
    qsort(a, n, sizeof(a[0]), compare);
    for(int i=0;i<n;i++) {
        if(i&&a[i-1][0]<a[i][0]) ind++;
        b[a[i][1]]=ind;
    }
    for(long long int i=0;i<m;i++) {
        scanf("%lld %lld %lld", &t, &tt, &ttt);
        t--; tt--;
        if(b[t]>b[tt]) {
            _t=t;
            t=tt;
            tt=_t;
        }
        c[b[t]]+=ttt;
        c[b[tt]+1]-=ttt;
    }
    for(long long int i=0;i<=200010;i++) {
        if(i) c[i]+=c[i-1];
        if(max<c[i]) max=c[i];
    }
    printf("%lld", max);
}
