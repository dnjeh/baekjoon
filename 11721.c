#include <stdio.h>
int main() {
    int i;
    char a[101];
    scanf("%s", a);
    for(i=0;a[i];i++) {
        if(i&&!(i%10)) printf("\n");
        printf("%c", a[i]);
    }
}