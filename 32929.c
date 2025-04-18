#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    printf("%c", "UOS"[(n-1)%3]);
}