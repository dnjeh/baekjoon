#include <stdio.h>
int main() {
    int n, w;
    scanf("%d %d", &n, &w);
    n=n*10+(n>=3?20:0)+(n==5?50:0)-(w>1000?15:0);
    printf("%d", n>0?n:0);
}