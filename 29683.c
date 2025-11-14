#include <stdio.h>
int main() {
    int n, a, t, ans=0;
    scanf("%d %d", &n, &a);
    for(int i=0;i<n;i++) {
        scanf("%d", &t);
        ans+=t/a;
    }
    printf("%d", ans);
}