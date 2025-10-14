#include <stdio.h>
int fun(int n) {
    return n*(n-1?fun(n-1):1);
}
int main() {
    int T, n;
    scanf("%d", &T);
    for(int i=0;i<T;i++) {
        scanf("%d", &n);
        printf("%d\n", fun(n)%10);
    }
}