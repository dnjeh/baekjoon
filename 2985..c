#include <stdio.h>
int main() {
    char t[5]={'=', '+', '-', '*', '/'};
    int a, b, c, f;
    scanf("%d %d %d", &a, &b, &c);
    if(a==b+c) f=01;
    else if(a==b-c) f=02;
    else if(a==b*c) f=03;
    else if(a==b/c) f=04;
    else if(a+b==c) f=10;
    else if(a-b==c) f=20;
    else if(a*b==c) f=30;
    else if(a/b==c) f=40;
    printf("%d%c%d%c%d", a, t[f/10], b, t[f%10], c);
}