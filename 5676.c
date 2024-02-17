#include <stdio.h>
#define MOD 1000000007
long long int a[1000001], b[2100000];
long long int initllst(long long int* frm, long long int* to, int sta, int end, int now);
long long int mulllst(long long int* tre, int sta, int end, int nsta, int nend, int now);
long long int updatllst(long long int* tre, int sta, int end, int ival, int val, int now);
void initllST(long long int* frm, long long int* to, int n);
long long int fun(long long int t) {
    if(t>0) return 1;
    else if(t<0) return -1;
    else return 0;
}
int main() {
    char ct;
    long long int n, m, i, j, t, tt, ttt;
    for(;scanf("%lld %lld", &n, &m)!=EOF;) {
        for(i=1;i<=n;i++) {  
            scanf("%lld", &a[i]);
            a[i]=fun(a[i]);
        }
        initllST(a, b, n);
        for(i=0;i<m;i++) {
            scanf(" %c %lld %lld", &ct, &tt, &ttt);
            if(ct=='C') {
                ttt=fun(ttt);
                updatllst(b, 1, n, tt, ttt, 1);
            }
            else {
                t=mulllst(b, tt, ttt, 1, n, 1);
                printf("%c", t>0?'+':(t==0?'0':'-'));
            }
        }
        printf("\n");
    }
}

long long int initllst(long long int* frm, long long int* to, int sta, int end, int now) {
    if(sta==end) return to[now]=frm[sta];
    int mid=(sta+end)/2;
    return to[now]=initllst(frm, to, sta, mid, now*2)*initllst(frm, to, mid+1, end, now*2+1);
}

void initllST(long long int* frm, long long int* to, int n) {
    initllst(frm, to, 1, n, 1);
}
//sta, end == 우리가 구하고자 하는 범위
long long int mulllst(long long int* tre, int sta, int end, int nsta, int nend, int now) {
    if(sta>nend||end<nsta) return 1;
    if(sta<=nsta&&nend<=end) return tre[now];
    int nmid=(nsta+nend)/2;
    return mulllst(tre, sta, end, nsta, nmid, now*2)*mulllst(tre, sta, end, nmid+1, nend, now*2+1);
}

long long int updatllst(long long int* tre, int sta, int end, int ival, int val, int now) {
    if(ival<sta||ival>end) return tre[now];
    if(sta==end) return tre[now]=val;
    int mid=(sta+end)/2;
    return tre[now]=updatllst(tre, sta, mid, ival, val, now*2)*updatllst(tre, mid+1, end, ival, val, now*2+1);
}