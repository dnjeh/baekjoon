#include <stdio.h>
int main() {
    int a, b, i, max=0, t=0;
    for(i=0;i<4;i++) {
        scanf("%d %d", &a, &b);
        t-=a; t+=b;
        if(max<t) max=t;
    }
    printf("%d", max);
}