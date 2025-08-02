#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    printf("%s", a<=100000&&!(a%2024)?"Yes":"No");
    return 0;
}
