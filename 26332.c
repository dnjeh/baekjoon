#include <stdio.h>

int main() {
    int n, a, b;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d %d", &a, &b);
        printf("%d %d\n%d\n", a, b, a*b-((a-1)*2));
    }
    return 0;
}
