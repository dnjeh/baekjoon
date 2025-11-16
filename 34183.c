#include <stdio.h>
int main() {
    int n, m, a, b;
    scanf("%d %d %d %d", &n, &m, &a, &b);
    a=((((m-n*3)*-a)>0)?((m-n*3)*-a):0);
    printf("%d", a+(a?b:0));
}