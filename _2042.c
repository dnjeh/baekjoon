#include <stdio.h>
long long int a[1000000], b[2005000];
long long int initllst(long long int* frm, long long int* to, int sta, int end, int now);
long long int sumllst(long long int* tre, int sta, int end, int nsta, int nend, int now);
void updatllst(long long int* tre, int sta, int end, int ival, int val, int now);
void initllST(long long int* frm, long long int* to, int n);
int main() {
    int n, m, k, i, j, t, tt, ttt;
    scanf("%d %d %d", &n, &m, &k);
    for(i=0;i<n;i++) {  
        scanf("%d", &a[i]);
    }
    initllST(a, b, n);
    for(i=0;i<m+k;i++) {
        scanf("%d %d %d", &t, &tt, &ttt);
        if(t==1) {
            t=ttt-a[tt-1];
            a[tt-1]=ttt;
            updatllst(b, 1, n, tt, t, 1);
        }
        else {
            printf("%lld\n", sumllst(b, tt, ttt, 1, n, 1));
        }
    }
}

long long int initllst(long long int* frm, long long int* to, int sta, int end, int now) {
    if(sta==end) return to[now]=frm[sta];
    int mid=(sta+end)/2;
    return to[now]=initllst(frm, to, sta, mid, now*2)+initllst(frm, to, mid+1, end, now*2+1);
}

void initllST(long long int* frm, long long int* to, int n) {
    initllst(frm, to, 1, n, 1);
}

long long int sumllst(long long int* tre, int sta, int end, int nsta, int nend, int now) {
    if(sta>nend||end<nsta) return 0;
    if(sta<=nsta&&end<=nend) return tre[now];
    int nmid=(nsta+nend)/2;
    return sumllst(tre, sta, end, nsta, nmid, now*2)+sumllst(tre, sta, end, nmid+1, nend, now*2+1);
}

void updatllst(long long int* tre, int sta, int end, int ival, int val, int now) {
    if(ival<sta||ival>end) return;
    tre[now]+=val;
    if(sta==end) return;
    int mid=(sta+end)/2;
    updatllst(tre, sta, mid, ival, val, now*2);
    updatllst(tre, mid+1, end, ival, val, now*2+1);
}