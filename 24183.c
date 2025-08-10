#include <stdio.h>
int main() {
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    printf("%.06lf", a*2*229*324/1000000.0+b*2*297*420/1000000.0+c*210*297/1000000.0);
}