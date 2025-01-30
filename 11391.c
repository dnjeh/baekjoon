#include <stdio.h>
#include <math.h>
int fun(int y, int x, int n, int m) {
    int ret=!(x%2)?n*x:n*(x+1)-1;
    return ret+y*(x%2?-1:1);
}
int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int k=(int)pow(2, m), l=(int)pow(2, n-m);
    for(int i=0;i<k;i++) {
        for(int j=0;j<l;j++) {
            printf("%d%c", fun(i, j, k, l), j+1<l?' ':'\n');
        }
    }
}