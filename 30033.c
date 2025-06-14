#include <stdio.h>
int main() {
    int n, a[1001], ans=0, t;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d", &a[i]);
    }
    for(int i=0;i<n;i++) {
        scanf("%d", &t);
        if(a[i]<=t) ans++;
    }
    printf("%d", ans);
}