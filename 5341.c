#include <stdio.h>
int main() {
    int n;
    for(scanf("%d", &n);n;scanf("%d", &n)) {
        printf("%d\n", n*(n+1)/2);
    }
}