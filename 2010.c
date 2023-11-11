#include <stdio.h>
int main() {
    int i, t, n, sum=0;
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        scanf("%d", &t);
        sum+=t;
    }
    printf("%d", sum-n+1);
}