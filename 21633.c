#include <stdio.h>

int main() {
    int k;
    double a;
    scanf("%d", &k);
    a=25+k*0.01;
    if(a<100) a=100;
    else if(a>1999.999) a=2000;
    printf("%.2lf", a);
    return 0;
}
