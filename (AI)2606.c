#include <stdio.h>
#define MAX_COMPUTER 101
int n, m;
int adj[MAX_COMPUTER][MAX_COMPUTER];
int visited[MAX_COMPUTER];
int count;
void dfs(int cur) {
    visited[cur] = 1;
    count++;
    int next;
    for (next=1;next<=n;next++) {
        if(adj[cur][next]&&!visited[next]) {
            dfs(next);
        }
    }
}
int main() {
    int i, a, b;
    scanf("%d %d", &n, &m);
    for(i=0;i<m;i++) {
        scanf("%d %d", &a, &b);
        adj[a][b]=adj[b][a]=1;
    }
    dfs(1);
    printf("%d", count-1);
}