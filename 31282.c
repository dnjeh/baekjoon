#include <stdio.h>
int main() {
    int n, m, k, ans;
    scanf("%d %d %d", &n, &m, &k);
    for(ans=0;n>0;ans++) {
        n+=m-k;
    }
    printf("%d", ans);
}