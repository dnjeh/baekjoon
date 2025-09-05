#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        int g, c, e;
        scanf("%d %d %d", &g, &c, &e);
        g=g*2-1;
        printf("%d\n", e-c>0?(e-c)*g:0);
    }
}