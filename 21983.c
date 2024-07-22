#include <stdio.h>
#include <math.h>
int main() {
    long double a;
    scanf("%llf", &a);
    printf("%llf", sqrt(a/6*4/sqrt(3))*6);
}