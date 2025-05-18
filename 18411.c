#include <stdio.h>
int main() {
    int a, b, c, d;
    scanf("%d %d %d", &a, &b, &c);
    d=a;
    if(b<d) d=b;
    if(c<d) d=c; 
    printf("%d", a+b+c-d);
}