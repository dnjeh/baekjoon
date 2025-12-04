#include <stdio.h>
int main() {
    int a, b;
    for(scanf("%d %d", &a, &b);a+b;scanf("%d %d", &a, &b)) {
        printf("%s\n", a+b==13?"Never speak again.":(a<b?"Left beehind.":(a>b?"To the convention.":"Undecided.")));
    }
}