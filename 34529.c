#include <stdio.h>
int main() {
    int x, y, z, u, v, w;
    scanf("%d %d %d %d %d %d", &x, &y, &z, &u, &v, &w);
    printf("%d", u/100*x+v/50*y+w/20*z);
}