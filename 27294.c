#include <stdio.h>
int main() {
    int t, s;
    scanf("%d %d", &t, &s);
    printf("%d", s||!(t>=12&&t<=16)?280:320);
}