#include <stdio.h>
int a[1000][1000], n, m, cnt=0;
void mve(int dy, int dx, int sty, int stx) {
    int y=sty-1, x=stx-1;
    for(;y>=0&&y<n&&x>=0&&x<m&&!a[y][x];y+=dy, x+=dx) {
        a[y][x]=1;
        cnt--;
    }
}
int main() {
    int q, t, tt, ttt, tttt, ttttt;
    scanf("%d %d %d", &n, &m, &q);
    cnt=n*m;
    for(int i=0;i<q;i++) {
        scanf("%d", &t);
        if(t==3) {
            printf("%d\n", cnt);
        }
        if(t==2) {
            scanf("%d %d", &tt, &ttt);
            printf("%d\n", a[tt-1][ttt-1]);
        }
        if(t==1) {
            scanf("%d %d %d %d", &tt, &ttt, &tttt, &ttttt);
            mve(tt, ttt, tttt, ttttt);
        }
    }
}