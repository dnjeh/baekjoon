#include <stdio.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%c", a*2>=b?'E':'H');
}