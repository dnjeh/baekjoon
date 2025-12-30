#include <stdio.h>
#include <string.h>
int main() {
    char t[30], tt[30];
    scanf("%s %s", t, tt);
    printf("%d", !strcmp(t, tt)?0:1550);
}