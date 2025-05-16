#include <stdio.h>
int main() {
    double n;
    for(scanf("%lf", &n);n>=-0.0001;scanf("%lf", &n)) {
        printf("Objects weighing %.02lf on Earth will weigh %.02lf on the moon.\n", n, n*0.167);
    }
}