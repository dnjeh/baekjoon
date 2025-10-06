#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    a--;
    printf("%c%d", (a%8)+'a', a/8+1);
}