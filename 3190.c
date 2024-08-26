#include <stdio.h>
int a[100][100], qind, q[2][20000], qsta, l[10001], n, lcnt;
void qput(int t, int tt) {
    a[t][tt]=2;
    q[0][qind]=t;
    q[1][qind++]=tt;
}
int qpop() {
    return q[0][qsta]*100+q[1][qsta++];
}
int fun(int y, int x) {
    int i, t, dire=0, dy, dx;
    qsta=qind=1;
    qput(y, x);
    for(i=1;;i++) {
        y=q[0][i]; x=q[1][i];
        dy=(dire%2)*((dire/2)?-1:1);
        dx=(!(dire%2))*((dire/2)?-1:1);
        //printf("%d %d\n", y+dy, x+dx);
        if(y+dy>=0&&y+dy<n&&x+dx>=0&&x+dx<n&&a[y+dy][x+dx]!=2) {
            if(!a[y+dy][x+dx]) {
                t=qpop();
                a[t/100][t%100]=0;
            }
            qput(y+dy, x+dx);
            dire=(dire+l[i]+4)%4;
        }
        else 
        break;
    }
    return i;
}
int main() {
    int t, tt, k;
    char ct;
    scanf("%d %d", &n, &k);
    for(int i=0;i<k;i++) {
        scanf("%d %d", &t, &tt);
        a[t-1][tt-1]=1;
    }
    scanf("%d", &lcnt);
    for(int i=0;i<lcnt;i++) {
        scanf("%d %c", &t, &ct);
        l[t]=ct=='D'?1:-1;
    }
    printf("%d", fun(0, 0));
    return 0;
}
