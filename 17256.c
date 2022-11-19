#include <stdio.h>
int main() {
    int a[3], c[3], i;
    for(i=0;i<3;i++) {
        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++) {
        scanf("%d",&c[i]);
    }
    printf("%d %d %d", c[0]-a[2], c[1]/a[1], c[2]-a[0]);
}