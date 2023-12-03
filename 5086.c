#include <stdio.h>
int main() {
    int a, b;
    for(scanf("%d %d", &a, &b);a+b;scanf("%d %d", &a, &b)) {
        if(!(b%a)) printf("factor");
        else if(!(a%b)) printf("multiple");
        else printf("neither");
        printf("\n");
    }
}