#include <stdio.h>
int main() {
    int n;
    char a[30], *b;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf(" %s", a);
        switch(a[3]) {
            case 'o': b="204"; break;
            case 'a': b="207"; break;
            case 'i': b="302"; break;
            case 'e': b="B101"; break;
            case 'w': b="303"; break;
            case 'r': b="501"; break;
            case 't': b="105"; break;
            default: break;
        }
        printf("%s\n", b);
    }
}