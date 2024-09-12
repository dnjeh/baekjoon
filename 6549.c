#include <stdio.h>
#define INF 2100000000
int a[100001]={INF, }, c[270000], n;
int mini(int* arr, int i, int j) {
    return arr[i]<arr[j]?i:arr[i]==arr[j]?(i<j?i:j):j;
}
int initminist(int* frm, int* to, int sta, int end, int now);
int minist(int* frm, int* tre, int sta, int end, int nsta, int nend, int now);
void initminiST(int* frm, int* to, int n); //st는 segment tree 의 약자
long long int fun(long long int sta, long long int end) {
    long long int _mini, ret=(long long int)a[(_mini=minist(a, c, sta, end, 1, n, 1))]*(long long int)(end-sta+1), t;
    if(sta<end) {
        if((sta<=_mini-1)&&ret<(t=fun(sta, _mini-1))) {
            ret=t;
        }
        if((_mini+1<=end)&&ret<(t=fun(_mini+1, end))) {
            ret=t;
        }
    } 
    return ret;
}
int main() {
    int i, j, t, tt, ttt;
    for(scanf("%d", &n);n;scanf("%d", &n)) {
      for(i=1;i<=n;i++) {  
        scanf("%d", &a[i]);
      }
      initminiST(a, c, n);
      printf("%lld\n", fun(1, n));
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
