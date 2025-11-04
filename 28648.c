#include <stdio.h>
int main() {
    int ans=0, t, tt, n;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d %d", &t, &tt);
        if(!i||t+tt<ans) ans=t+tt;
    }
    printf("%d", ans);
}