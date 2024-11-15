#include <stdio.h>
#include <stdlib.h>
long long int a[100010], n;
int mem[2][10081], now;
long long int pack(int s, int d, int p) {
    long long int e=s+d;
    return e*100000*10000+(long long int)s*10000+p;
}
void unpack(int* s, int* p, long long int t) {
    *s=(int)(t/10000%100000);
    *p=(int)(t%10000);
}
int lbs(long long int end) {
    int up, dwn, mid;
    up=n; dwn=0;
    for(mid=(dwn+up)/2;dwn<up;mid=(dwn+up)/2) {
        if(a[mid]<end) dwn=mid+1;
        else up=mid;
    }
    return up;
}
int dp(int t) {
    if(mem[0][t]==now) return mem[1][t];
    int ret=dp(t-1);
    int sta=lbs(((long long int)t)*100000*10000), end=lbs(((long long int)(t+1))*100000*10000);
    for(int i=sta;i<end;i++) {
        int s, p, _t;
        unpack(&s, &p, a[i]);
        if(ret<(_t=dp(s)+p)) ret=_t;
    }
    mem[0][t]=now;
    mem[1][t]=ret;
    //if(t<100) printf("%d는 %d\n", t, ret);
    return ret;
}
int compare(const void *a, const void *b) {
    if(*(long long int*)a<*(long long int*)b) return -1;
    if(*(long long int*)a>*(long long int*)b) return 1;
    return 0;
}
int main() {
    long long int t, tt, ttt, T;
    scanf("%lld", &T);
    for(now=1;now<=T;now++) {
        scanf("%d", &n);
        for(int i=0;i<n;i++) {
            scanf("%lld %lld %lld", &t, &tt, &ttt);
            a[i]=pack(t, tt, ttt);
        }
        mem[0][0]=now;
        qsort(a, n, sizeof(long long int), compare);
        printf("%d\n", dp(10080));
    }
}