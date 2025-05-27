#include <stdio.h>
int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if(a==b&&b!=c) printf("C");
    else if(a!=b&&b==c) printf("A");
    else if(a==c&&a!=b) printf("B");
    else printf("*");
}