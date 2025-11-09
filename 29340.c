#include <stdio.h>
int main() {
    char a[20], b[20];
    scanf("%s %s", a, b);
    for(int i=0;a[i];i++) {
        printf("%c", a[i]>b[i]?a[i]:b[i]);
    }
}