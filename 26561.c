#include <stdio.h>

int main() {
    int n, t, tt;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d %d", &t, &tt);
        printf("%d\n", t+tt/4-(tt/7));
    }
    return 0;
}
