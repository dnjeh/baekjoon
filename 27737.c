#include <stdio.h>
int a[100][100], n;
int dfs(int y, int x) {
    int ret=1;
    a[y][x]=0;
    if(y-1>=0&&a[y-1][x]) ret+=dfs(y-1, x);
    if(y+1<n&&a[y+1][x]) ret+=dfs(y+1, x);
    if(x-1>=0&&a[y][x-1]) ret+=dfs(y, x-1);
    if(x+1<n&&a[y][x+1]) ret+=dfs(y, x+1);
    return ret;
}
int main() {
    int m, k, sum = 0;
    scanf("%d %d %d", &n, &m, &k);
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            scanf("%d", &a[i][j]);
            a[i][j]=!a[i][j];
        }
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(a[i][j]) {
                int t = dfs(i, j);
                sum+=t/k+(t%k?1:0);
            }
        }
    }
    if(sum&&sum<=m) printf("POSSIBLE\n%d", m-sum);
    else printf("IMPOSSIBLE");
}
