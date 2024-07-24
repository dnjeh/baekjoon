#include <stdio.h>
int main() {
    int T;
    double t;
    scanf("%d", &T);
    for(int i=0;i<T;i++) {
        scanf("%lf", &t);
        printf("$%.2lf\n", t*0.8);
    }
}