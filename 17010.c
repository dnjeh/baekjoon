#include <stdio.h>
int main() {
    int n, a;
    char t;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d %c", &a, &t);
        for(int j=0;j<a;j++) {
            printf("%c", t);
        }
        printf("\n");
    }
}