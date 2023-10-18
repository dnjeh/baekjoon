#include <stdio.h>
int a[100][100], shark[6][10000], willbe; //y, x, 속력, 이동방향, 크기, 사망여부 // 잡아먹힐 상어 인덱스
int r, c, m, now, ans;
void sharkMove() {
    int i, *y, *x;
    for(i=0;i<m;i++) {
        if(shark[5][i]) continue;
        y=&shark[0][i]; x=&shark[1][i];
        t=getLoc(i);
        *y=t/1000;
        *x=t%1000;
        
    }
}
int main() {
    int i;
    scanf("%d %d %d", &r, &c, &m);
    for(i=0;i<m;i++) {
        for(j=0;j<5;j++) {
            scanf("%d", &shark[j][i]);
        }
    }
    for(now=1;now<=r;now++) {
        sharkMove();
        ans+=shark[4][willbe];
        shark[5][willbe]=1;
    }
    printf("%d", ans);
}
