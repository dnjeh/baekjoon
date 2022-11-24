#include <stdio.h>
int main() {
    int a, b, i, min, max;
    scanf("%d %d", &a, &b);
    for(i=1;i<=(a>b?a:b);i++) {
        if(!(a%i)&&!(b%i)) {
            min=i;
        }
    }
    max=a*b/min;
    printf("%d\n%d", min, max);
}