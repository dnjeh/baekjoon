#include <stdio.h>
int main() {
    int n, m, y, x;
    scanf("%d %d %d %d", &n, &m, &y, &x);
    printf("%d", ((n+y)/(y+1))*((m+x)/(x+1)));
}