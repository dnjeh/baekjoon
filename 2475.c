#include <stdio.h>
int main() {
    int sum=0, i, t;
    for(i=0;i<5;i++) {
        scanf("%d", &t);
        sum+=t*t;
    }
    printf("%d", sum%10);
}