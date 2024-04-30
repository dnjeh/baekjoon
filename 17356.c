#include <stdio.h>
#include <math.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%.16lf", 1/(1+pow(10, (b-a)/400.0)));
}