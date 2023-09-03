#include <stdio.h>
int T, n, a[100001], vis[100001], now;
int dfs(int t) {
    
}
void set();
int main() {
    int i, j, ans;
    scanf("%d", &T);
    for(i=0;i<T;i++) {
        ans=0;
        scanf("%d", &n);
        set();
        for(j=1;j<=n;j++) {
            scanf("%d", &a[j]);
        }
        for(j=1;j<=n;j++) {
            if(!vis[j]) {
                now++;
                ans+=dfs(j);
            }
        }
    }
}
void set() {
    for(int i=1;i<=n;i++) {
        vis[i]=0;
    }
}