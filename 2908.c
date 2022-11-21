#include <stdio.h>
int main() {
    int a, a1, b, b1;
    scanf("%d %d", &a, &b);
    a1=a/100+(a/10)%10*10+(a%10)*100;
    b1=b/100+(b/10)%10*10+(b%10)*100;
    printf("%d", a1>b1?a1:b1);
}