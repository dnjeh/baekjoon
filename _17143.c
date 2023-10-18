#include <stdio.h>
const toLoc[] = {0, 2, 1, 4, 3};
int a[3][101][101], shark[6][10000], willbe; //y, x, 속력, 이동방향, 크기, 사망여부 // 잡아먹힐 상어 인덱스
int r, c, m, now, ans;
int getLoc(int t) {
    int i, y=shark[0][t], x=shark[1][t], loc=shark[3][t], spd=shark[2][t], oloc; oloc=loc;
    int *_t=NULL, *_tt=NULL;
    if(loc==1) {
        loc=2;
        y=r+1-y;
    }
    else if(loc==4) {
        loc=3;
        x=c+1-x;
    }
    if(loc==2) {
        _t=&r; _tt=&y;
    }
    else {
        _t=&c; _tt=&x;
    }
    //이 이후의 _t, _tt 앞엔 * 붙여주기!
    spd%=(*_t-1)*2;
    switch((spd+*_tt)/(*_t)) {
        case 0:
            *_tt+=spd;
        case 1: 
            loc=toLoc[loc];
            *_tt=
            break;
    
    }
    if(oloc!=loc) {
        _tt=_t+1-_tt;
        loc=toLoc[loc];
    }
    return y*10000+x*10+loc;
}
void sharkMove() {
    int i, *y=NULL, *x=NULL, *loc=NULL, *siz=NULL, t;
    for(i=0;i<m;i++) {
        if(shark[5][i]) continue;
        y=&shark[0][i]; x=&shark[1][i]; loc=&shark[3][i]; siz=&shark[4][i];
        t=getLoc(i);
        *y=t/10000;
        *x=t%10000/10;
        *loc=t%10;
        if(a[0][*y][*x]==now&&a[1][*y][*x]<*siz) {
            shark[5][a[2][*y][*x]]=1;
            a[0][*y][*x]=0;
        }
        if(a[0][*y][*x]!=now) {
            a[0][*y][*x]=now;
            a[1][*y][*x]=*siz;
            a[2][*y][*x]=i;
            if(*x==now-1&&shark[0][willbe]>=*y) willbe=i;
        }
    }
}
int main() {
    int i, j;
    scanf("%d %d %d", &r, &c, &m);
    for(i=0;i<m;i++) {
        for(j=0;j<5;j++) {
            scanf("%d", &shark[j][i]);
        }
    }
    for(now=1;now<=c;now++) {
        sharkMove();
        ans+=shark[4][willbe];
        shark[5][willbe]=1;
    }
    printf("%d", ans);
}
