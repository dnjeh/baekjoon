#include <stdio.h>
int fun(int t, int a, int b) {
    return (t>1000?(t-1000)*b+1000*a:t*a);
}
int main() {
    int a, b, n, t;
    scanf("%d %d %d", &a, &b, &n);
    for(int i=0;i<n;i++) {
        scanf("%d", &t);
        printf("%d %d\n", t, fun(t, a, b));
    }
}