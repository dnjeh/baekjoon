#include <stdio.h>
int main() {
    int n, a[1000], t, tt, ans=0;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d", &a[i]);
    }
    for(int i=0;i<n;i++) {
        scanf("%d %d", &t, &tt);
        if(a[i]&&t<tt) ans+=tt-t;
    }
    printf("%d", ans);
}