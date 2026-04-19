#include <stdio.h>
#include <math.h>
int main() {
    double n;
    scanf("%lf", &n);
    printf("%.13lf", n*n*sin(60*3.1415926535897932/180)/2);
}