#include <stdio.h>
int n, a[100][100], vis[100][100];
void mbfs(int i, int j, int t) {
    vis[i][j]=t;
    if(i-1>=0&&vis[i-1][j]!=t&&a[i-1][j]>t) mbfs(i-1, j, t);
    if(i+1<n&&vis[i+1][j]!=t&&a[i+1][j]>t) mbfs(i+1, j, t);
    if(j-1>=0&&vis[i][j-1]!=t&&a[i][j-1]>t) mbfs(i, j-1, t);
    if(j+1<n&&vis[i][j+1]!=t&&a[i][j+1]>t) mbfs(i, j+1, t);
}
int bfs(int t) {
    int cnt=0;
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(vis[i][j]!=t&&a[i][j]>t) {
                mbfs(i, j, t);
                cnt++;
            }
        }
    }
    return cnt;
}
int main() {
    int i, j, max=0, imax=0, t;
    for(i=0;i<100;i++) for(j=0;j<100;j++) vis[i][j]=-1;
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            scanf("%d", &a[i][j]);
            if(a[i][j]>max) max=a[i][j];
        }
    }
    for(i=0;i<=max;i++) {
        if(imax<(t=bfs(i))) {
            imax=t;
        }
    }
    printf("%d", imax);
}