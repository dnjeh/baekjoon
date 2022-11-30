#include <stdio.h>
int main() {
    int a, b;
    double lastd;
    scanf("%d %d", &a, &b);
    lastd=(double)a-((double)a/100.0)*(double)b;
    printf("%d", lastd<100?1:0);
}