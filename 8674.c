#include <stdio.h>
int main() {
    unsigned int a, b;
    scanf("%u %u", &a, &b);
    if(a%2&&b%2) printf("%u", a<b?a:b);
    else printf("0");
}