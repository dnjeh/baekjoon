#include <stdio.h>

int main() {
    int a, n;
    scanf("%d %d", &a, &n);
    for(int i=0;i<n;i++) {
        a=(a%2?a*2:a/2)^6;
    }
    printf("%d", a);
}