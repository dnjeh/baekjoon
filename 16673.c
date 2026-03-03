#include <stdio.h>
int main() {
    int c, k, p, ans=0;
    scanf("%d %d %d", &c, &k, &p);
    for(int i=1;i<=c;i++) {
        ans+=k*i+p*i*i;
    }
    printf("%d", ans);
}