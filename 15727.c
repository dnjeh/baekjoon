#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    if(a%5) {
        a=a/5+1;
    }
    else {
        a/=5;
    }
    printf("%d", a);
}