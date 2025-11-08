#include <stdio.h>
int main() {
    int a, b, c;
    scanf("%d-%d-%d", &a, &b, &c);
    printf("%s", (b<9||b==9&&c<=16)?"GOOD":"TOO LATE");
}