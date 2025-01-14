#include <stdio.h>
void swp(int *a, int *b) {
    int t=*a;
    *a=*b;
    *b=t;
}
int main() {
    int A, B, a, b;
    scanf("%d %d", &A, &B);   
    a=(A+B)/2; b=A-a;
    if(a<b) swp(&a, &b);
    if(a<0||b<0||a+b!=A||a-b!=B) printf("-1");
    else printf("%d %d", a, b);
}