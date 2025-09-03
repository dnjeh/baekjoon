#include <stdio.h>
double myabs(double a) {
    return a<0?a*-1:a;
}
int main() {
    int n;
    double a, b;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%lf %lf", &a, &b);
        printf("%.01lf\n", myabs(a-b));
    }
    return 0;
}
