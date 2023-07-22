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
    if(t-1>=0&&pre!=t-1&&b(t-1,t)) pf=1;
    if(t+1<4&&pre!=t+1&&b(t,t+1)) nf=1;
    for(i=d==1?8:1;i>=0&&i<=9;i-=d) {
        a[t][i+d]=a[t][i];
    } 
    if(d==1) a[t][1]=a[t][9]; //여기 문제!
    else a[t][8]=a[t][0];
    if(pf) turn(t-1, d==1?-1:1, t);
    if(nf) turn(t+1, d==1?-1:1, t);
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