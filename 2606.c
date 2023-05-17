#include <stdio.h>
int n, m;
int a[100][100];
int b[100];
int cnt;
void dfs(int _t) {
    b[_t]=1;
    cnt++;
    for(int i=0;i<n;i++) {
        if(a[_t][i]&&!b[i]) {
            dfs(i);
        }
    }
}
int main() {
    int i, t, tt;
    scanf("%d %d", &n, &m);
    for(i=0;i<m;i++) {
        scanf("%d %d", &t, &tt);
        a[t-1][tt-1]=a[tt-1][t-1]=1;
    }
    dfs(0);
    printf("%d", cnt-1);
}