#include <stdio.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if(a>3) a-=24;
    printf("%d", b-a);
}