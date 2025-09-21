#include <stdio.h>
int main() {
    int a, b, ans=0;
    scanf("%d %d", &a, &b);
    a+=b;
    for(;a;a/=10) {
        ans++;
    }
    printf("%d", ans);
}