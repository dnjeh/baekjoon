#include <stdio.h>
int main() {
    int n;
    char t[100100];
    scanf("%d\n%s", &n, t);
    printf("%s", t+n-5);
}