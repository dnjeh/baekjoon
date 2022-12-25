#include <stdio.h>
int main() {
    int a[3] = {0, 1, 0}, i, n;
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        a[2]=a[0]+a[1];
        a[0]=a[1];
        a[1]=a[2];
    }
    printf("%d", a[0]);
}