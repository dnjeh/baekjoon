#include <stdio.h>
int main() {
    char t, old;
    int n;
    scanf("%d\n", &n);
    for(int i=0;i<n;i++) {
        scanf("%c", &t);
        if(i&&t!=old) {
            printf("No");
            return 0;
        }
        old=t;
    }
    printf("Yes");
}