#include <stdio.h>
int main() {
    int Z, a, b;
    scanf("%d", &Z);
    for(int i=0;i<Z;i++) {
        scanf("%d %d", &a, &b);
        printf("%d\n", a*b/2);
    }
}