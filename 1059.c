#include <stdio.h>
int a[1001];
int main() {
    int cnt=0, i, j, t, L, n;
    scanf("%d", &L);
    for(i=0;i<L;i++) {
        scanf("%d", &t);
        a[t]=1;
    }
    scanf("%d", &n);
    for(i=1;i<=1000;i++) {
        if(n<i) break;
        if(a[i]) continue;
        for(j=i+1;j<=1000&&!a[j];j++) {
            if(i<=n&&n<=j) cnt++;
        }
    }
    printf("%d", cnt);
}