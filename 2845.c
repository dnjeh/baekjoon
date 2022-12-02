#include <stdio.h>
int main() {
    int l, p, i, t;
    scanf("%d %d", &l, &p);
    for(i=0;i<5;i++) {
        scanf("%d", &t);
        printf("%d ", t-l*p);
    }
}