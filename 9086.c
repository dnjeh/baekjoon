#include <stdio.h>
#include <string.h>
int main() {
    int i, n;
    char a[1001];
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        scanf("%s", a);
        printf("%c%c\n", a[0], a[strlen(a)-1]);
    }
}