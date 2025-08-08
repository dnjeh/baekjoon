#include <stdio.h>

int main() {
    char t;
    int n;
    scanf("%d\n", &n);
    for(int i=0;i<n;i++) {
        scanf("%c", &t);
        printf("%c", t=='I'?'i':'L');
    }
    return 0;
}
