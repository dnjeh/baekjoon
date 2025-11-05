#include <stdio.h>
int main() {
    int T, a, b, c;
    scanf("%d", &T);
    for(int i=0;i<T;i++) {
        scanf("%d %d %d", &a, &b, &c);
        printf("%d\n", (2*b+c*(a-1))*a/2);
    }
}