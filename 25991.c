#include <stdio.h>
#include <math.h>
int main() {
    long double sum=0, t;
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%Lf", &t);
        sum+=t*t*t;
    }
    printf("%.20Lg", cbrtl(sum));
}