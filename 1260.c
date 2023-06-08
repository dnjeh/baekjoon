#include <stdio.h>
int ege[1000][1000], vis[1000];
int n, m, v;
void visclear() {
    for(int i=0;i<1000;i++) {
        vis[i]=0;
    }
}
void dfs(int _ind) {
    printf("%d ", _ind+1);
    vis[_ind]=1;
    for(int i=0;i<1000;i++) {
        if(!vis[i]&&ege[_ind][i]) dfs(i);
    }
}
void bfs(int _ind) {
    int tind=1, q[1100]={_ind, }, now;
    vis[_ind]=1;
    for(now=0;now<tind;now++) {
        printf("%d ", q[now]+1);
        for(int i=0;i<1000;i++) {
            if(!vis[i]&&ege[q[now]][i]) {
                q[tind++]=i;
                vis[i]=1;
            }
        }
    }
}   
int main() {
    int i, t1, t2;
    scanf("%d %d %d", &n, &m, &v); v--;
    for(i=0;i<m;i++) {
        scanf("%d %d", &t1, &t2);
        ege[t1-1][t2-1]=1;
        ege[t2-1][t1-1]=1;
    }
    visclear();
    dfs(v);
    printf("\n");
    visclear();
    bfs(v);
}