#include <stdio.h>
int main() {
    double a, b, c;
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%lf %lf %lf", &a, &b, &c);
        printf("$%.2lf\n", a*b*c);
    }
}