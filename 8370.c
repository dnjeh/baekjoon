#include <stdio.h>
int main() {
    int t, t1, sum=0, i;
    for(i=0;i<2;i++) {
        scanf("%d %d", &t, &t1);
        sum+=t*t1;
    }
    printf("%d", sum);
}