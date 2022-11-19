#include <stdio.h>
int main() {
    int a[4], i;
    for(i=0;i<4;i++) {
        scanf("%d", &a[i]);
    }
    printf("%d", a[0]*56+a[1]*24+a[2]*14+a[3]*6);
}