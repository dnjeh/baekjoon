#include <stdio.h>
int main() {
    int n, t;
    scanf("%d", &n);
    for(scanf("%d", &t);t;scanf("%d", &t)) {
        if(!(t%n)) printf("%d is a multiple of %d.\n", t, n);
        else printf("%d is NOT a multiple of %d.\n", t, n);
    }
    return 0;
}
