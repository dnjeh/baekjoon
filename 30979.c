#include <stdio.h>

int main() {
    int t, n, sum=0, f;
    scanf("%d %d", &t, &n);
    for(int i=0;i<n;i++) {
        scanf("%d", &f);
        sum+=f;
    }
    printf("Padaeng_i %s", sum>=t?"Happy":"Cry");
    return 0;
}