#include <stdio.h>
int main() {
    int a, b, now=1;
    for(int i=0;i<2;i++) {
        scanf("%d %d", &a, &b);
        now=(now-1+a+b-1)%4+1;
    }
    printf("%d", now);
}