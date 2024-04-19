#include <stdio.h>

int main() {
    int sum=0, n, t, tt;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d %d", &t, &tt);
        sum+=tt%t;
    }
    printf("%d", sum);
    return 0;
}
