#include <stdio.h>
int r, c, b[26];
char a[20][21];
int chk(int y, int x) {
    if(b[a[y][x]-65]) return 0;
    else return 1;
}
int dfs(int y, int x) {
    int ret=0, t;
    b[a[y][x]-65]=1;
    if(y-1>=0&&chk(y-1,x)&&ret<(t=dfs(y-1,x))+1) ret=t+1;
    if(x-1>=0&&chk(y,x-1)&&ret<(t=dfs(y,x-1))+1) ret=t+1;
    if(y+1<r&&chk(y+1,x)&&ret<(t=dfs(y+1,x))+1) ret=t+1;
    if(x+1<c&&chk(y,x+1)&&ret<(t=dfs(y,x+1))+1) ret=t+1;
    b[a[y][x]-65]=0;
    return ret;
}
int main() {
    int i, j;
    scanf("%d %d", &r, &c);
    for(i=0;i<r;i++) {
        scanf("%s", a[i]);
    }
    printf("%d", dfs(0, 0)+1);
}