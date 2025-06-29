#include <stdio.h>
int scan(double* a, double* b) {
    scanf("%lf", a);
    scanf("%lf", b);
    if(!(*a)&&!(*b)) return 0;
    else return 1;
}
int main() {
    double a, b;
    for(;scan(&a, &b);) {
        if(!a||!b) printf("AXIS\n");
        else if(a>0&&b>0) printf("Q1\n");
        else if(a<0&&b>0) printf("Q2\n");
        else if(a<0&&b<0) printf("Q3\n");
        else printf("Q4\n");
    }
    printf("AXIS");
}