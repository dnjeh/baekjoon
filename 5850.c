#include <stdio.h>
int a[102][102], vis[102][102];
int dfs(int y, int x) {
    vis[y][x]=1;
    int ret=0;
    if(y+1<102){
        if(!vis[y+1][x]&&!a[y+1][x]) ret+=dfs(y+1, x);
        else if(a[y+1][x]) ret++;
    }
    if(y-1>=0){
        if(!vis[y-1][x]&&!a[y-1][x]) ret+=dfs(y-1, x);
        else if(a[y-1][x]) ret++;
    }
    if(x+1<102){
        if(!vis[y][x+1]&&!a[y][x+1]) ret+=dfs(y, x+1);
        else if(a[y][x+1]) ret++;
    }
    if(x-1>=0){
        if(!vis[y][x-1]&&!a[y][x-1]) ret+=dfs(y, x-1);
        else if(a[y][x-1]) ret++;
    }
    return ret;
}
int main() {
    int n, t, tt;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d %d", &t, &tt);
        a[t][tt]=1;
    }
    printf("%d", dfs(0, 0));
}