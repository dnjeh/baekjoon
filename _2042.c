#include <stdio.h>
long long int a[1000000], b[2005000];
long long int initllst(long long int* frm, long long int* to, int sta, int end, int now);
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
            updatllst(b, tt, ttt, 1);
        }
        else {
            printf("%lld\n", sumllst(b, tt, ttt, 1));
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

long long int sumllst(long long int* tre, int sta, int end, int now) {

}

long long int updatllst(long long int* tre, int sta, int end, int now) {

}