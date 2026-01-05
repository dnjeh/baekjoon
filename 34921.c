#include <stdio.h>
int main() {
    int a, t;
    scanf("%d %d", &a, &t);
    printf("%d", (10+2*(25-a+t)<0)?0:10+2*(25-a+t));
}