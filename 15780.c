#include <stdio.h>
int main() {
    int n, k, t, sum=0;
    scanf("%d %d", &n, &k);
    for(int i=0;i<k;i++) {
        scanf("%d", &t);
        sum+=t/2+t%2;
    }
    printf("%s", sum>=n?"YES":"NO");
}