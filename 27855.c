#include <stdio.h>
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    a=a*3+b; c=c*3+d;
    if(a==c) printf("NO SCORE");
    else printf("%d %d", a<c?2:1, a<c?c-a:a-c);
}