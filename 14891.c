#include <stdio.h>
int a[4][10];

int fin() {
    int ret=0;
    for(int i=0;i<4;i++) {
        if(a[i][1]) ret+=1<<i;
    }
    return ret;
}
int b(int p, int n) {
    if(a[p][3]!=a[n][7]) return 1;
    else return 0;
}
void turn(int t, int d, int pre) {
    int i, pf=0, nf=0;
    if(d-1>=0&&pre!=d-1&&b(d-1,d)) pf=1;
    if(d+1<4&&pre!=d+1&&b(d,d+1)) nf=1;
    for(i=d==1?8:1;i>=0&&i<=9;i-=d) {
        a[t][i+d]=a[t][i];
    } i+=d;
    a[t][i+d*8]=a[t][i];
    if(pf) turn(d-1, d==1?-1:1, t);
    if(nf) turn(d+1, d==1?-1:1, t);
}
int main() {
    int i, j, n, t, tt;
    for(i=0;i<4;i++) {
        for(j=0;j<8;j++) {
            scanf("%1d", &a[i][j+1]);
        }
    }
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        scanf("%d %d", &t, &tt);
        turn(t-1, tt, -1);
    }
    printf("%d", fin());
}