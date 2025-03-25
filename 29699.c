#include <stdio.h>
int main() {
    char *t = "WelcomeToSMUPC";
    int n;
    scanf("%d", &n);
    n--;
    printf("%c", t[n%14]);
}