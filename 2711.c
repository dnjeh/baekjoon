#include <stdio.h>
int main() {
    int T, i, j, a;
    char t[81];
    scanf("%d", &T);
    for(i=0;i<T;i++) {
        scanf("%d", &a);
        scanf("%s", t);
        for(j=0;t[j]!='\0';j++) {
            if(j+1!=a) {
                printf("%c", t[j]);
            }
        }
        printf("\n");
    }
}