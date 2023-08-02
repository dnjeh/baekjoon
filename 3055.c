#include <stdio.h>
int a[50][50], vis[50][50], r, c, q[3000][2], ind, stx, sty, enx, eny;
void printz() {
    int i, j;
    for(i=0;i<r;i++) {
        for(j=0;j<c;j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("-----------%d\n", ind);
}
void put(int y, int x, int t) {
    q[ind][0]=y;
    q[ind++][1]=x;
    vis[y][x]=t;
}
int chk(int y, int x, int now, int t) {
    if(y>=0&&x>=0&&y<r&&x<c&&vis[y][x]!=t&&a[y][x]!=-1&&(!a[y][x]||a[y][x]>now+1)) return 1;
    else return 0;
}
int bfs(int ey, int ex) {
    int cnt, i=0, dind=0, y, x, f=0;
    for(cnt=1;dind<ind&&!f;cnt++) {
        for(dind=ind;i<dind&&!f;i++) {
            y=q[i][0]; x=q[i][1];
            if(chk(y, x, cnt, -1)&&!(y==eny&&x==enx)) a[y][x]=cnt;
            if(y==ey&&x==ex) {
                f=1;
                break;
            }
            if(y==eny&&x==enx) continue;
            else {
                if(chk(y-1, x, cnt, ey*ex+1)) put(y-1, x, ey*ex+1);
                if(chk(y+1, x, cnt, ey*ex+1)) put(y+1, x, ey*ex+1);
                if(chk(y, x-1, cnt, ey*ex+1)) put(y, x-1, ey*ex+1);
                if(chk(y, x+1, cnt, ey*ex+1)) put(y, x+1, ey*ex+1);
            }
        }
    }
    return f?cnt:-1;
}
int main() {
    int i, j, it;
    char t[52];
    scanf("%d %d", &r, &c);
    for(i=0;i<r;i++) {
        scanf("%s", t);
        for(j=0;j<c;j++) {
            switch(t[j]) {
            case '*':
                put(i, j, r*c*100+1);     
                break;
            case 'D':
                eny=i; enx=j;
                break;
            case 'S':
                sty=i; stx=j;
                break;
            case 'X':
                a[i][j]=-1;
                break;
            }
        }
    }
    bfs(r, c*100);
    //printz();
    ind=0; put(sty, stx, eny*enx);
    it=bfs(eny, enx);
    //printz();
    if(it==-1) printf("KAKTUS");
    else printf("%d", it-2);
}