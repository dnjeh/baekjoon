#include <stdio.h>
int main() {
    int a, b, c;
    for(;scanf("%d %d %d", &a, &b, &c)!=EOF;) {
        printf("%d\n", b-a>c-b?b-a-1:c-b-1);
    }
}