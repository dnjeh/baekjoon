#include <stdio.h>
int main() {
    int sum=0, t, i;
    for(i=0;i<6;i++) {
        scanf("%d", &t);
        sum+=t*5;
    }
    printf("%d", sum);
}