#include <stdio.h>
int main() {
    int n, a=0, b=1, c=1;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        a=b;
        b=c;
        c=a+b;
    }
    printf("%d", a);
}