#include <stdio.h>

int main() {
    int T, v, e;
    scanf("%d", &T);
    for(int i=0;i<T;i++) {
        scanf("%d %d", &v, &e);
        printf("%d\n", e+2-v);
    }
}