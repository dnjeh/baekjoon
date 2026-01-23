#include <stdio.h>
int main() {
    int s;
    double d, t;
    scanf("%d %lf %lf", &s, &d, &t);
    printf("%s", ((s*t*(double)5280/3600)>=d)?"MADE IT":"FAILED TEST");
}