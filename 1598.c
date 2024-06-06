#include <stdio.h>
int f(int a) { return (a-1)/4; }
int abs(int a) { return a<0?a*-1:a; }
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", abs(f(a)-f(b))+abs(a-f(a)*4-(b-f(b)*4)));
}