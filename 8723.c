#include <stdio.h>
int max(int a, int b) {
    return a>b?a:b;
}
int fun(int a, int b, int c) {
    int t=a*a+b*b+c*c, tt=max(max(a, b), c);
    if((t-tt*tt)==tt*tt) return 1;
    else return 0;
}
int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d", a==b&&b==c?2:(fun(a, b, c)?1:0));
}