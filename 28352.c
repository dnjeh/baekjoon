#include <stdio.h>
int main() {
    int n, a=6;
    scanf("%d", &n);
    for(int i=11;i<=n;i++) a*=i;
    printf("%d", a);
}