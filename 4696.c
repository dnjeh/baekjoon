#include <stdio.h>
int main() {
    double n;
    for(scanf("%lf", &n);n;scanf("%lf", &n)) {
        printf("%.02lf\n", 1+n+n*n+n*n*n+n*n*n*n);
    }
}