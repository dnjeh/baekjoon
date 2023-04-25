#include <stdio.h>
int main() {
    int i;
    char a[1010];
    scanf("%s", a);
    scanf("%d", &i);
    printf("%c", a[i-1]);
}