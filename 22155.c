#include <stdio.h>

int main() {
    int n, a, b;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d %d", &a, &b);
        printf("%s\n", (a+b<=3&&a<=2&&b<=2)?"Yes":"No");
    }
    return 0;
}