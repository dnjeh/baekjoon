#include <stdio.h>
int r, c, cnt;
int a[10000][500];
void printa() {
    int i, j;
    for(i=0;i<r;i++) {
        for(j=0;j<c;j++) {
            printf("%c", a[i][j]?'x':'.');
        }
        printf("\n");
    }
    printf("\n----------\n");
}
int dfs(int y, int x) {
    int f=0;
    a[y][x]=1;
    if(x+1>=c) f=1;
    else if(y-1>=0&&!a[y-1][x+1]&&dfs(y-1, x+1)) f=1;
    else if(!a[y][x+1]&&dfs(y, x+1)) f=1;
    else if(y+1<r&&!a[y+1][x+1]&&dfs(y+1, x+1)) f=1; 
    if(f) return 1;
    return 0;
}
int main() {
    int i, j;
    char t[510];
    scanf("%d %d", &r, &c);
    for(i=0;i<r;i++) {
        scanf("%s", t);
        for(j=0;j<c;j++) {
            if(t[j]=='x') a[i][j]=1;
        }
    }
    for(i=0;i<r;i++) {
        cnt+=dfs(i, 0);
        //printa();
    }
    printf("%d", cnt);
}