#include <stdio.h>
int T, n, a[100001], vis[100001], now, ans, f;
int dfs(int t) {
    int ret=0;
    if(ret==t&&f) ret=0;
    if(!vis[t]) {
        vis[t]=now;
        ret=dfs(a[t]);
    }
    else if(vis[t]==now&&!f) {
        ret=t;
        f=1;
    }
    if(!ret) {
        ans++;
    }
    return ret;
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
                f=0; now++;
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