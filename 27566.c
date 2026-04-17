#include <stdio.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%s", ((b+a/2)/a%2)?"down":"up");
}