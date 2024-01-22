#include <stdio.h>
int a[8], vis[9];
void bak(int n, int t) {
    if(t>=n) {
        for(int i=0;i<n;i++) {
            printf("%d%c", a[i], i+1>=n?'\n':' ');
        }
    }
    else {
        for(int i=1;i<=n;i++) if(!vis[i]) {
            vis[i]=1;
            a[t]=i;
            bak(n, t+1);
            vis[i]=0;
        }
    }
}
int main() {
    int n;
    scanf("%d", &n);
    bak(n, 0);
}