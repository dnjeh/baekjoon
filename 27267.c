#include <stdio.h>
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("%c", a*b>c*d?'M':(a*b<c*d?'P':'E'));
}