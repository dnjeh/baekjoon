#include <stdio.h>
int a[1000][1000], vis[1000], mem[1000][1000], n, q, nlnow;
int dfs(int now, int end) {
    int ret=0, t;
    //printf("> %d %d %d\n", now, end, ret);
    vis[now]=nlnow;
    if(mem[now][end]!=-1) ret=mem[now][end];
    else {
        for(int i=0;i<n;i++) {
            if(vis[i]!=nlnow&&a[now][i]&&i==end) {
                ret = a[now][i];
                break;
            }
            if(vis[i]!=nlnow&&a[now][i]&&(t=dfs(i, end))) {
                ret = t+a[now][i]; 
                break;
            }
        }
        mem[now][end]=ret;
    }
    return ret;
}
int main() {
    int t, tt, ttt;
    scanf("%d %d", &n, &q);
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            mem[i][j]=-1;
        }
    }
    for(int i=0;i<n-1;i++) {
        scanf("%d %d %d", &t, &tt, &ttt);
        t--; tt--;
        a[t][tt]=ttt;
        a[tt][t]=ttt;
    }
    for(nlnow=1;nlnow<=q;nlnow++) {
        scanf("%d %d", &t, &tt);
        t--; tt--;
        printf("%d\n", dfs(t, tt));
    }
    return 0;
}
/*5
1 2 3
1 3 4
2 4 5
2 5 6
3
4 5
3 5
1 4*/
