#include <stdio.h>

int main() {
    int a, b, n, t, tt, sum=0;
    scanf("%d %d %d", &a, &b, &n);
    for(int i=0;i<n;i++) {
        scanf("%d %d", &t, &tt);
        sum+=a*t>b*tt?a*t:b*tt;
    }
    printf("%d", sum);
    return 0;
}