#include <stdio.h>
int main() {
    int i;
    char a[4];
    scanf("%s", a);
    for(i=2;i>=0;i--) {
        printf("%c", a[i]);
    }
}