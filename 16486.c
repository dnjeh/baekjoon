#include <stdio.h>
#define PI 3.141592

int main() {
    int d1, d2;
    double ans;
    scanf("%d %d", &d1, &d2);
    ans=d1*2+d2*2*PI;
    printf("%.6lf", ans);
    return 0;
}
