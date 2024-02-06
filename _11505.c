#include <stdio.h>
#define MOD 1000000007
long long int a[1000001], b[2100000];
long long int initllst(long long int* frm, long long int* to, int sta, int end, int now);
long long int mulllst(long long int* tre, int sta, int end, int nsta, int nend, int now);
long long int updatllst(long long int* frm, long long int* tre, int sta, int end, int ival, int now);
void initllST(long long int* frm, long long int* to, int n);
int ind() {

}
int main() {
    long long int n, m, k, i, j, t, tt, ttt;
    scanf("%lld %lld %lld", &n, &m, &k);
    for(i=1;i<=n;i++) {  
        scanf("%lld", &a[i]);
    }
    initllST(a, b, n);
    for(i=0;i<m+k;i++) {
        scanf("%lld %lld %lld", &t, &tt, &ttt);
        if(t==1) {
            b[ind()]=ttt;
            updatllst(a, b, 1, n, t, 1);
        }
        else {
            printf("%lld\n", mulllst(b, tt, ttt, 1, n, 1));
        }
    }
}

long long int initllst(long long int* frm, long long int* to, int sta, int end, int now) {
    if(sta==end) return to[now]=frm[sta];
    int mid=(sta+end)/2;
    return to[now]=initllst(frm, to, sta, mid, now*2)*initllst(frm, to, mid+1, end, now*2+1)%MOD;
}

void initllST(long long int* frm, long long int* to, int n) {
    initllst(frm, to, 1, n, 1);
}
//sta, end == 우리가 구하고자 하는 범위
long long int mulllst(long long int* tre, int sta, int end, int nsta, int nend, int now) {
    if(sta>nend||end<nsta) return 1;
    if(sta<=nsta&&nend<=end) return tre[now];
    int nmid=(nsta+nend)/2;
    return mulllst(tre, sta, end, nsta, nmid, now*2)*mulllst(tre, sta, end, nmid+1, nend, now*2+1)%MOD;
}

long long int updatllst(long long int* frm, long long int* tre, int sta, int end, int ival, int now) {
    if(ival<sta||ival>end) return 1;
    if(sta==end) return tre[now];
    int mid=(sta+end)/2;
    return tre[now]=updatllst(frm, tre, sta, mid, ival, now*2)*updatllst(frm, tre, mid+1, end, ival, now*2+1)%MOD;
}