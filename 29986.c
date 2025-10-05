#include <stdio.h>
int main() {
    int n, a, ans=0, t;
    scanf("%d %d", &n, &a);
    for(int i=0;i<n;i++) {
        scanf("%d", &t);
        if(t<=a) ans++;
    }
    printf("%d", ans);
}