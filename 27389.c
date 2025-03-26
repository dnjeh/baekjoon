#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    printf("%d.%d", n/4, (n%4)*25);
}