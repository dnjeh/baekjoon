#include <stdio.h>
int fun() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    return a*3+b*20+c*120;
}
int main() {
    int a, b;
    a=fun(); b=fun();
    printf("%s", a>b?"Max":(a<b?"Mel":"Draw"));
}