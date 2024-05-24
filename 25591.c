#include <stdio.h>
int main() {
    int a, b, c, d, r, q, t, tt;
    scanf("%d %d", &t, &tt);
    a=100-t; b=100-tt; c=100-a-b; d=a*b; q=d/100; r=d%100;
    printf("%d %d %d %d %d %d\n", a, b, c, d, q, r);
    if(q) printf("%d %d", c+q, r);
    else printf("%d %d", c, d);
}