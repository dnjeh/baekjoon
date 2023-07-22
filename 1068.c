#include <stdio.h>
int a[50][50];
int n, rot, exc, cnt;
void dfs(int t) {
    int i, f=0;
    for(i=0;i<n;i++) {
        if(i==exc) continue;
        if(a[t][i]) {
            dfs(i);
            f=1;
        }
    }
    if(!f) cnt++;
}
int main() {
    int i, t;
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        scanf("%d", &t);
        if(t==-1) rot=i;
        else a[t][i]=1;
    }
    scanf("%d", &exc);
    if(exc!=rot) dfs(rot);
    printf("%d", cnt);
}