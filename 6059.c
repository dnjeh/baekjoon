#include <stdio.h>
int a[1000][1000], vis[1000], n, qq, nlnow, q[1010][2], qind;
void qput(int t, int tt) {
    vis[t]=nlnow;
    q[qind][0]=t;
    q[qind++][1]=tt;
}
int dfs(int sta, int end) {
    int ind;
    qput(sta, 0);
    for(int i=0;;ind=qind) {
        for(;i<ind;i++) {
            int now=q[i][0], len=q[i][1];
            if(now==end) return len;
            for(int j=0;j<n;j++) 
                if(vis[j]!=nlnow&&a[now][j]) 
                    qput(j, len+a[now][j]);
        }
    }
    return 0;
}
int main() {
    int t, tt, ttt;
    scanf("%d %d", &n, &qq);
    for(int i=0;i<n-1;i++) {
        scanf("%d %d %d", &t, &tt, &ttt);
        t--; tt--;
        a[t][tt]=ttt;
        a[tt][t]=ttt;
    }
    for(nlnow=1;nlnow<=qq;nlnow++) {
        scanf("%d %d", &t, &tt);
        qind=0; t--; tt--;
        printf("%d\n", dfs(t, tt));
    }
    return 0;
}
/*5 3
1 2 3
1 3 4
2 4 5
2 5 6
4 5
3 5
1 4*/
