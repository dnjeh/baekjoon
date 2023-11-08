#include <stdio.h>
int main() {
    double r;
    scanf("%lf", &r);
    printf("%0.6lf\n%0.6lf", r*r*3.141592653589793, r*2*r);
}