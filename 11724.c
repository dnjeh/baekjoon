#include <stdio.h>
int n, m;
int a[1000][1000];
int b[1000], c[1000];
int cnt;
void dfs(int _t) {
    b[_t]=1;
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
        c[t-1]=c[tt-1]=1;
        a[t-1][tt-1]=a[tt-1][t-1]=1;
    }
    for(i=0;i<n;i++) {
        if(c[i]&&!b[i]) {
            cnt++;
            dfs(i);
        }
    }
    for(i=0;i<n;i++) {
        if(!c[i]) cnt++;
    }
    printf("%d", cnt);
}