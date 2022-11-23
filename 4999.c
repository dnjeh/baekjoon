#include <stdio.h>
#include <string.h>
int main() {
    char t[1002]={'\0'};
    int a, b;
    scanf("%s", t);
    a=strlen(t);
    scanf("%s", t);
    b=strlen(t);
    printf("%s", a>=b?"go":"no");
}