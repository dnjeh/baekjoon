#include <stdio.h>
int main() {
    int a, b;
    for(scanf("%d %d", &a, &b);a!=0&&b!=0;scanf("%d %d", &a, &b)) {
        printf("%s\n", a>b?"Yes":"No");
    }
}