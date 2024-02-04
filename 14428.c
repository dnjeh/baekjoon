#include <stdio.h>
#define INF 2100000000
int a[100001]={INF, }, c[270000];
int mini(int* arr, int i, int j) {
    return arr[i]<arr[j]?i:arr[i]==arr[j]?(i<j?i:j):j;
}
int initminist(int* frm, int* to, int sta, int end, int now);
int minist(int* frm, int* tre, int sta, int end, int nsta, int nend, int now);
void updatminist(int* frm, int* tre, int sta, int end, int ival, int now);
void initminiST(int* frm, int* to, int n); //st는 segment tree 의 약자
int main() {
    int n, m, i, j, t, tt, ttt;
    scanf("%d", &n);
    for(i=1;i<=n;i++) {  
        scanf("%d", &a[i]);
    }
    initminiST(a, c, n);
    scanf("%d", &m);
    for(i=0;i<m;i++) {
        scanf("%d %d %d", &ttt, &t, &tt);
        if(ttt==2) {
            printf("%d\n", minist(a, c, t, tt, 1, n, 1));
        }
        else {
            a[t]=tt;
            updatminist(a, c, 1, n, t, 1);
        }
    }
}
int initminist(int* frm, int* to, int sta, int end, int now) {
    if(sta==end) return to[now]=sta;
    int mid=(sta+end)/2;
    return to[now]=mini(frm, initminist(frm, to, sta, mid, now*2),initminist(frm, to, mid+1, end, now*2+1));
}
void initminiST(int* frm, int* to, int n) {
    initminist(frm, to, 1, n, 1);
}
//sta, end == 우리가 구하고자 하는 범위
int minist(int* frm, int* tre, int sta, int end, int nsta, int nend, int now) {
    if(sta>nend||end<nsta) return 0;
    int nmid=(nsta+nend)/2;
    if(sta<=nsta&&nend<=end) return tre[now];
    return mini(frm, minist(frm, tre, sta, end, nsta, nmid, now*2),minist(frm, tre, sta, end, nmid+1, nend, now*2+1));
}
void updatminist(int* frm, int* tre, int sta, int end, int ival, int now) {
    if(ival<sta||ival>end) return;
    if(sta==end) return;
    int mid=(sta+end)/2;
    updatminist(frm, tre, sta, mid, ival, now*2);
    updatminist(frm, tre, mid+1, end, ival, now*2+1);
    tre[now]=mini(frm, tre[now*2], tre[now*2+1]);
}