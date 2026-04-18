#include <stdio.h>
int main() {
    int a, b, sum=0, c, d;
    for(int i=0;i<5;i++) {
        scanf("%d %d", &a, &b);
        sum+=a*b;
    }
    scanf("%d %d", &c, &d);
    printf("%d", (sum/5)*c/d);
}