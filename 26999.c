#include <stdio.h>
int a[1000][80], h, w;
int dfs(int y, int x) {
    int ret=1;
    a[y][x]=0;
    if(y-1>=0&&a[y-1][x]) ret+=dfs(y-1, x);
    if(y+1<h&&a[y+1][x]) ret+=dfs(y+1, x);
    if(x-1>=0&&a[y][x-1]) ret+=dfs(y, x-1);
    if(x+1<w&&a[y][x+1]) ret+=dfs(y, x+1);
    return ret;   
}
int main() {
    int max=0, it;
    char t[1010];
    scanf("%d %d", &w, &h);
    for(int i=0;i<h;i++) {
        scanf(" %s", t);
        for(int j=0;j<w;j++) {
            if(t[j]=='*') a[i][j]=1;
        }
    }
    for(int i=0;i<h;i++) {
        for(int j=0;j<w;j++) {
            if(a[i][j]) {
                if(max<(it=dfs(i, j))) {
                    max=it;
                }
            }
        }
    }   
    printf("%d", max);
    return 0;
}
