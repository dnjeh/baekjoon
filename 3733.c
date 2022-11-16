#include <stdio.h>
int main() {
    int a, b;
    for(;scanf("%d %d", &a, &b)!=EOF;) {
        printf("%d\n", b/(a+1));
    }
}