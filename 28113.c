#include <stdio.h>
int main() {
    int a, n, b;
    scanf("%d %d %d", &n, &a, &b);
    printf("%s", b>a?"Bus":b<a?"Subway":"Anything");
}