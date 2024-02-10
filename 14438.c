#include <stdio.h>
#define INF 2100000000
int a[100001]={INF, }, c[270000];
int min(int a, int b) { return a<b?a:b; }
int initminst(int* frm, int* to, int sta, int end, int now);
int minst(int* tre, int sta, int end, int nsta, int nend, int now);
int updatminst(int* tre, int sta, int end, int ival, int val, int now);
void initminST(int* frm, int* to, int n); //st는 segment tree 의 약자
int main() {
    int n, m, i, j, t, tt, ttt;
    scanf("%d", &n);
    for(i=1;i<=n;i++) {  
        scanf("%d", &a[i]);
    }
    initminST(a, c, n);
    scanf("%d", &m);
    for(i=0;i<m;i++) {
        scanf("%d %d %d", &ttt, &t, &tt);
        if(ttt==2) {
            printf("%d\n", minst(c, t, tt, 1, n, 1));
        }
        else {
            updatminst(c, 1, n, t, tt, 1);
        }
    }
}
int initminst(int* frm, int* to, int sta, int end, int now) {
    if(sta==end) return to[now]=frm[sta];
    int mid=(sta+end)/2;
    return to[now]=min(initminst(frm, to, sta, mid, now*2),initminst(frm, to, mid+1, end, now*2+1));
}
void initminST(int* frm, int* to, int n) {
    initminst(frm, to, 1, n, 1);
}
//sta, end == 우리가 구하고자 하는 범위
int minst(int* tre, int sta, int end, int nsta, int nend, int now) {
    if(sta>nend||end<nsta) return INF;
    int nmid=(nsta+nend)/2;
    if(sta<=nsta&&nend<=end) return tre[now];
    return min(minst(tre, sta, end, nsta, nmid, now*2),minst(tre, sta, end, nmid+1, nend, now*2+1));
}
int updatminst(int* tre, int sta, int end, int ival, int val, int now) {
    if(ival<sta||ival>end) return tre[now];
    if(sta==end) return tre[now]=val;
    int mid=(sta+end)/2;
    return tre[now]=min(updatminst(tre, sta, mid, ival, val, now*2), updatminst(tre, mid+1, end, ival, val, now*2+1));
}