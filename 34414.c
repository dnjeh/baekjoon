#include <stdio.h>
int main() {
    int n, t;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d", &t);
        if(t<48) {
            printf("False");
            return 0;
        }
    }
    printf("True");
}