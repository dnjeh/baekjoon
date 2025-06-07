#include <stdio.h>
int main() {
    double a, b;
    scanf("%lf %lf", &a, &b);
    double c=a/(b*b);
    if(c>25) printf("Overweight");
    else if(c<18.5) printf("Underweight");
    else printf("Normal weight");
}