#include <stdio.h>
#define INF 2100000000
int a[1000001], b[300000];
int st(int* tre, int sta, int end, int nsta, int nend, int now);
void updatst(int* tre, int sta, int end, int ival, int val, int now);
int main() {
    int n, t, tt, ttt, ans=0;
    scanf("%d", &n);
    for(int i=1;i<=n;i++) {
        scanf("%d", &t);
        a[t]=i;
    }
    for(int i=1;i<=n;i++) {
        scanf("%d", &t);
        tt=a[t];
        if(t>tt) {
            ttt=t;
            t=tt;
            tt=ttt;
        }
        
    }
    printf("%d", ans);
}
//sta, end == 우리가 구하고자 하는 범위
int st(int* tre, int sta, int end, int nsta, int nend, int now) {
    if(sta>nend||end<nsta) return INF;
    if(sta<=nsta&&nend<=end) return tre[now];
    int nmid=(nsta+nend)/2;
    return min(st(tre, sta, end, nsta, nmid, now*2),st(tre, sta, end, nmid+1, nend, now*2+1));
}