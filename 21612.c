#include <stdio.h>
int main() {
    int b;
    scanf("%d", &b);
    int t=b*5-400;
    printf("%d\n%d", t, t<100?1:(t>100?-1:0));
}