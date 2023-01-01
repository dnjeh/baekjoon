#include <stdio.h>
#include <math.h>
int main() {
    int n, a=0, i;
    scanf("%d", &n);
    for(i=0;n;i++, n/=10) {
        a+=((n%10)?(int)pow(2, i):0);
    }
    printf("%o", a);
}