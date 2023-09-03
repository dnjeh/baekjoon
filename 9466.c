#include <stdio.h>
int T, n, a[100001], vis[100001], now, ans;
int dfs(int t) {
    int tt=0;
    if(!vis[t]) {
        vis[t]=now;
        tt=dfs(a[t]);
    }
    else if(vis[t]==now) {
        return t;
    }
    else return 0;

    if(!tt) ans++;
    if(tt!=t) return tt;
    else return 0;
}
void set();
int main() {
    int i, j;
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
                dfs(j);
            }
        }
        printf("%d\n", ans);
    }
}
void set() {
    for(int i=1;i<=n;i++) {
        vis[i]=0;
    }
}