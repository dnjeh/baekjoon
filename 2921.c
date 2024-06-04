#include <stdio.h>

int main() {
    int n, sum=0;
    scanf("%d", &n);
    for(int i=1;i<=n;i++) {
        sum+=(i*2*(i*2+1)/2)-(i*(i+1)/2)+i;
    }
    printf("%d", sum);
    return 0;
}
