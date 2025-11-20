#include <stdio.h>
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("%s", a+c<b+d?"Hanyang Univ.":(a+c>b+d?"Yongdap":"Either"));
}