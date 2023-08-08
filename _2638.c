#include <stdio.h>
int a[100][100], vis[100][100], q[10100][2];
int ind, now, let=0, r, c;
void printa() {
    int i, j;
    printf("\n");
    for(i=0;i<r;i++) {
        for(j=0;j<c;j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
int chk(int y, int x, int f) {
    int ret=0;
    if(x-1>=0&&!a[y][x-1]&&vis[y][x-1]==f) ret++; ret<<=1;
    if(x+1<c&&!a[y][x+1]&&vis[y][x+1]==f) ret++; ret<<=1;
    if(y-1>=0&&!a[y-1][x]&&vis[y-1][x]==f) ret++; ret<<=1;
    if(y+1<r&&!a[y+1][x]&&vis[y+1][x]==f) ret++; ret<<=1;
    return ret;
}
int ch(int t) {
    int ret=0;
    for(;t;t>>=1) if(t%2) ret++;
    return ret;
}
void qput(int y, int x) {
    q[ind][0]=y;
    q[ind++][1]=x;
}   
void bfs() {
    int y, x, t;
    for(;now<ind;now++) {
        y=q[now][0]; x=q[now][1]; 
        t=chk(y, x, 0); vis[y][x]=1;
        if(t&8) qput(y, x-1); 
        if(t&4) qput(y, x+1); 
        if(t&2) qput(y-1, x); 
        if(t&1) qput(y+1, x); 
    }
}
int main() {
    int i, j, cnt=0, dind;
    scanf("%d %d", &r, &c);
    for(i=0;i<r;i++) {
        for(j=0;j<c;j++) {
            scanf("%d", &a[i][j]);
            if(a[i][j]) let++;
        }
    }
    qput(0, 0);
    bfs();
    for(cnt=0;let>0;cnt++) {
        printa();
        for(i=0;i<r;i++) {
            for(j=0;j<c;j++) {
                if(ch(chk(i, j, 1))>=2) {
                    a[i][j]=0;
                    let--;
                    qput(i, j);
                }
            }
        }
        bfs();
    }
    printf("%d", cnt);
    for(;;);
}
