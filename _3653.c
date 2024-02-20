#include <stdio.h>
#define INF 2100000000
int a[100001], b[300000];
int initst(int* frm, int* to, int sta, int end, int now);
int st(int* tre, int sta, int end, int nsta, int nend, int now);
void updatst(int* tre, int sta, int end, int ival, int val, int now);
void initST(int* frm, int* to, int n); //st는 segment tree 의 약자
int main() {
    int T, n, m, t, tt;
    scanf("%d %d", &n, &m);
    for(int i=0;i<T;i++) {
        for(int j=1;j<=n;i++) {  
            scanf("%d", &a[i]);
        }
        initST(a, b, n);
        for(i=0;i<m;i++) {
            scanf("%d", &t);
            printf("%d\n", st(c, t, tt, 1, n, 1));
        }
    }
}

int initst(int* frm, int* to, int sta, int end, int now) {
    if(sta==end) return to[now]=frm[sta];
    int mid=(sta+end)/2;
    return to[now]=min(initst(frm, to, sta, mid, now*2),initst(frm, to, mid+1, end, now*2+1));
}
void initST(int* frm, int* to, int n) {
    initst(frm, to, 1, n, 1);
}
//sta, end == 우리가 구하고자 하는 범위
int st(int* tre, int sta, int end, int nsta, int nend, int now) {
    if(sta>nend||end<nsta) return INF;
    if(sta<=nsta&&nend<=end) return tre[now];
    int nmid=(nsta+nend)/2;
    return min(st(tre, sta, end, nsta, nmid, now*2),st(tre, sta, end, nmid+1, nend, now*2+1));
}