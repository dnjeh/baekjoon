#include <stdio.h>
int main() {
    double a;
    scanf("%lf", &a);
    printf("%lf", 100000/(a*1609.344/3.785411784));
}