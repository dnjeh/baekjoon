#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    if(!n) {
        printf("1");
        return 0;
    }
    else if(n==1) {
        printf("0");
        n--;
    }
    if(n%2) {
        printf("4");
        n--;
    }
    for(;n;n-=2) {
        printf("8");
    }
}