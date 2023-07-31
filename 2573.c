#include <stdio.h>
int a[2][300][300], vis[300][300], n, m;
void set(int t, int y, int x) {
    int se=0;
    if(x-1>=0&&!a[t%2][y][x-1]) se++;
    if(x+1<m&&!a[t%2][y][x+1]) se++;
    if(y-1>=0&&!a[t%2][y-1][x]) se++;
    if(y+1<n&&!a[t%2][y+1][x]) se++;
    a[(t+1)%2][y][x]=a[t%2][y][x]-se;
    if(a[(t+1)%2][y][x]<0) a[(t+1)%2][y][x]=0;
}
void dfs(int y, int x, int t) {
    if(x-1>=0&&a[t%2][y][x-1]&&vis[y][x-1]<(t+1)) {
        vis[y][x-1]=t+1;
        dfs(y, x-1, t);
    }
    if(x+1<m&&a[t%2][y][x+1]&&vis[y][x+1]<(t+1)) {
        vis[y][x+1]=t+1;
        dfs(y, x+1, t);
    }
    if(y-1>=0&&a[t%2][y-1][x]&&vis[y-1][x]<(t+1)) {
        vis[y-1][x]=t+1;
        dfs(y-1, x, t);
    }
    if(y+1<n&&a[t%2][y+1][x]&&vis[y+1][x]<(t+1)) {
        vis[y+1][x]=t+1;
        dfs(y+1, x, t);
    }
}
void printa(int t) {
    printf("=======\n");
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            printf("%d ", a[t%2][i][j]);
        }
        printf("\n");
    }
}
int main() {
    int i, j, cnt, f=1;
    scanf("%d %d", &n, &m);
    for(i=0;i<n;i++) for(j=0;j<m;j++) {
        scanf("%d", &a[0][i][j]);
    }
    for(cnt=0;f==1;cnt++) {
        f=0;
        for(i=0;i<n;i++) for(j=0;j<m;j++) {
            if(a[cnt%2][i][j]) set(cnt, i, j); 
        }
        for(i=0;i<n;i++) for(j=0;j<m;j++) {
            if(a[cnt%2][i][j]&&vis[i][j]<(cnt+1)) {
                dfs(i, j, cnt); 
                f++;
            }
        }
        for(i=0;i<n;i++) for(j=0;j<m;j++) 
            if(!a[(cnt+1)%2][i][j]) a[cnt%2][i][j]=0;
    }
    printf("%d", !f?0:cnt-1);
}