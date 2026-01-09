#include <stdio.h>
int main() {
    int a, b, c, d, f=0;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    f=((a+b<=d)<<1)|(c<=d);
    printf("%s", !f?"T.T":(f-1?(f-2?"~.~":"Shuttle"):"Walk"));
}