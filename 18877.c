#include <stdio.h>
#include <stdlib.h>
long long int a[100000][3];
long long int fun(long long int d, long long int m) {
    long long int ret=0, last=-1; 
    for(int i=0;i<m;i++) {
        long long int sta=a[i][0], end=a[i][1], leng=a[i][2], tret;
        if(last!=-1LL&&sta-last<d&&end>=d+last) {
            leng-=d-(sta-last);
            sta+=d-(sta-last);
        }
        if(last==-1||sta-last>=d) {
            tret=leng/d+1LL;
            last=(tret-1LL)*d+sta;
            ret+=tret;
        }
    }
    return ret;
}
int compare(const void* a, const void* b) {
    long long int t=((*(long long int(*)[3])a)[0]-(*(long long int(*)[3])b)[0]);
    return t>0?1:t<0?-1:0;
}
long long int ubs(long long int up, long long int n, long long int m) {
    long long int dwn, mid;
    dwn=1;
    for(mid=(dwn+up)/2;dwn<up;mid=(dwn+up)/2) {
        //printf("%lld %lld %lld\n", up, dwn, mid);
        if(fun(mid, m)>=n) dwn=mid+1;
        else up=mid;
    }
    return up;
}
int main() {
    long long int n, m;
    scanf("%lld %lld", &n, &m);
    for(int i=0;i<m;i++) {
        scanf("%lld %lld", &a[i][0], &a[i][1]);
        a[i][2]=a[i][1]-a[i][0];
    }
    qsort(a, m, sizeof(a[0]), compare);
    printf("%lld", ubs(a[m-1][1]-a[0][0]+1, n, m)-1);
}