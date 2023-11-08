#include <stdio.h>
const int toLoc[] = {0, 2, 1, 4, 3};
int a[3][101+9][101+9], shark[6][10000+100], willbe; //y, x, 속력, 이동방향, 크기, 사망여부 // 잡아먹힐 상어 인덱스
int r, c, m, now, ans;
void printa() {
    int i, j;
    printf("---------------------------\n");
    for(i=1;i<=r;i++) {
        for(j=1;j<=c;j++) {
            printf("%d ", a[0][i][j]==now?a[1][i][j]:0);
        }
        printf("\n");
    }
    printf("---------------------------\n");
}
int getLoc(int t) {
    int y=shark[0][t], x=shark[1][t], loc=shark[3][t], spd=shark[2][t], f=0;
    int *_t=NULL, *_tt=NULL;
    if(loc==1) {
        loc=2;
        y=r+1-y;
        f=1;
    }
    else if(loc==4) {
        loc=3;
        x=c+1-x;
        f=1;
    }
    if(loc==2) {
        _t=&r; _tt=&y;
    }
    else {
        _t=&c; _tt=&x;
    }
    //이 이후의 _t, _tt 앞엔 * 붙여주기!
    spd%=(*_t-1)*2;
    if(spd+*_tt<=*_t) {
        *_tt+=spd;
    }
    else if(spd+*_tt<=((*_t)*2-1)) {
        loc=toLoc[loc];
        *_tt=*_t-(spd+*_tt-*_t);
    }
    else {
        *_tt=spd+*_tt-((*_t)*2-2);
    }
    if(f) {
        *_tt=*_t+1-*_tt;
        loc=toLoc[loc];
    }
    return y*10000+x*10+loc;
}
void sharkMove() {
    int i, *y=NULL, *x=NULL, *loc=NULL, *siz=NULL, t, f=0;
    for(i=0;i<m;i++) {
        if(shark[5][i]) continue;
        y=&shark[0][i]; x=&shark[1][i]; loc=&shark[3][i]; siz=&shark[4][i];
        t=getLoc(i);
        *y=t/10000;
        *x=t%10000/10;
        *loc=t%10;
        if(a[0][*y][*x]==now) {
            if(a[1][*y][*x]<*siz) {
                shark[5][a[2][*y][*x]]=1;
                a[0][*y][*x]=0;
            }
            else {
                shark[5][i]=1;
                continue;
            }
        }
        if(a[0][*y][*x]!=now) {
            a[0][*y][*x]=now;
            a[1][*y][*x]=*siz;
            a[2][*y][*x]=i;
            if(*x==now+1&&(!f||shark[0][willbe]>=*y)) {
                willbe=i;
                f=1;
            }
        }
    }
}
int main() {
    int i, j, f=0; willbe=-1;
    scanf("%d %d %d", &r, &c, &m);
    for(i=0;i<m;i++) {
        for(j=0;j<5;j++) {
            scanf("%d", &shark[j][i]);
            if(shark[1][i]==1&&(!f||shark[0][willbe]>shark[0][i])) {
                f=1;
                willbe=i;
            }
        }
    }
    for(now=1;now<=c;now++) {
        if(willbe!=-1) {
            ans+=shark[4][willbe];
            shark[5][willbe]=1;
        }
        willbe=-1;
        sharkMove();
        //printa();
    }
    printf("%d", ans);
}
