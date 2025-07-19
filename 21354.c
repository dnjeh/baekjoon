#include <stdio.h>
int main() {
    int a, p;
    scanf("%d %d", &a, &p);
    a*=7; p*=13;
    printf("%s", a>p?"Axel":(a<p?"Petra":"lika"));
}