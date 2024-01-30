#include <stdio.h>
#define INF 2100000000
int a[1000001], b[2100000], c[2100000];
int min(int a, int b) {return a<b?a:b;}
int max(int a, int b) {return a>b?a:b;}
int initmaxst(int* frm, int* to, int sta, int end, int now);
int initminst(int* frm, int* to, int sta, int end, int now);
int minst(int* tre, int sta, int end, int nsta, int nend, int now);
int maxst(int* tre, int sta, int end, int nsta, int nend, int now);
void updatst(int* tre, int sta, int end, int ival, int val, int now);
void initmaxST(int* frm, int* to, int n);
void initminST(int* frm, int* to, int n); //st는 segment tree 의 약자
int main() {
    int n, m, i, j, t, tt;
    scanf("%d %d", &n, &m);
    for(i=1;i<=n;i++) {  
        scanf("%d", &a[i]);
    }
    initmaxST(a, b, n);
    initminST(a, c, n);
    for(i=0;i<m;i++) {
        scanf("%d %d", &t, &tt);
        printf("%d %d\n", minst(c, t, tt, 1, n, 1), maxst(b, t, tt, 1, n, 1));
    }
}

int initmaxst(int* frm, int* to, int sta, int end, int now) {
    if(sta==end) return to[now]=frm[sta];
    int mid=(sta+end)/2;
    return to[now]=max(initmaxst(frm, to, sta, mid, now*2),initmaxst(frm, to, mid+1, end, now*2+1));
}
int initminst(int* frm, int* to, int sta, int end, int now) {
    if(sta==end) return to[now]=frm[sta];
    int mid=(sta+end)/2;
    return to[now]=min(initminst(frm, to, sta, mid, now*2),initminst(frm, to, mid+1, end, now*2+1));
}

void initmaxST(int* frm, int* to, int n) {
    initmaxst(frm, to, 1, n, 1);
}
void initminST(int* frm, int* to, int n) {
    initminst(frm, to, 1, n, 1);
}
//sta, end == 우리가 구하고자 하는 범위
int minst(int* tre, int sta, int end, int nsta, int nend, int now) {
    if(sta>nend||end<nsta) return INF;
    if(sta<=nsta&&nend<=end) return tre[now];
    int nmid=(nsta+nend)/2;
    return min(minst(tre, sta, end, nsta, nmid, now*2),minst(tre, sta, end, nmid+1, nend, now*2+1));
}
int maxst(int* tre, int sta, int end, int nsta, int nend, int now) {
    if(sta>nend||end<nsta) return 0;
    if(sta<=nsta&&nend<=end) return tre[now];
    int nmid=(nsta+nend)/2;
    return max(maxst(tre, sta, end, nsta, nmid, now*2),maxst(tre, sta, end, nmid+1, nend, now*2+1));
}