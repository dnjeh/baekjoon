#include <stdio.h>
int max(int a, int b) {
    return a>b?a:b;
}
int main() {
    int a, b, c;
    for(int i=0;;i++) {
        scanf("%d %d %d", &a, &b, &c);
        int imax=max(a, max(b, c));
        if(!(a+b+c)) return 0;
        if((a+b+c-imax)<=imax) printf("Invalid\n");
        else if(a==b&&b==c) printf("Equilateral\n");
        else if(a==b||b==c||c==a) printf("Isosceles\n");
        else printf("Scalene\n");
    }
}