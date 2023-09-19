#include <stdio.h>
int fun(int a, int b) {
    return !(a%b)?b:fun(b, a%b); 
}
int main() {
    int T, i, a, b, c;
    scanf("%d", &T);
    for(i=0;i<T;i++) {
        scanf("%d %d", &a, &b);
        c=fun(a, b);
        printf("%d\n", a/c*b);
    }
}