#include <stdio.h>
int main() {
    int i;
    char a[102];
    scanf("%s", a);
    for(i=0;i<100&&a[i]!='\0';i++) {
        printf("%c", a[i]>=97?a[i]-32:a[i]+32);
    }
}