#include <stdio.h>

int main() {
    long long int n;
    scanf("%lld", &n);
    if(n<=32767&&n>=-32768) printf("short");
    else if(n<=-1+(1LL<<31)&&n>=-(1LL<<31)) printf("int");
    else printf("long long");
    return 0;
}
