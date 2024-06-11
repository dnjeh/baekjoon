#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for(;!(n&1);n>>=1) {}
    if(n==1) printf("1");
    else printf("0");
}