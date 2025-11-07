#include <stdio.h>
int main() {
    int a, b, c;
    scanf("%d %d", &a, &b);
    if(a>b) {
        c=a;
        a=b;
        b=c;
    }
    printf("%d", (b==a)?a+b:a+a+1);
}