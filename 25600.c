#include <stdio.h>
int fun(int a, int d, int g) {
    return a==d+g?(a*(d+g)*2):(a*(d+g));
}
int main() {
    int n, max=0, a, d, g;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d %d %d", &a, &d, &g);
        if(max<fun(a, d, g)) max=fun(a, d, g);
    }
    printf("%d", max);
}