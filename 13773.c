#include <stdio.h>
int main() {
    int n;
    for(scanf("%d", &n);n;scanf("%d", &n)) {
        printf("%d ", n);
        if(n==1916||n==1940||n==1944) printf("Games cancelled\n");
        else if(n%4||n<1896) printf("No summer games\n");
        else if(n>2020) printf("No city yet chosen\n");
        else printf("Summer Olympics\n");
    }
}