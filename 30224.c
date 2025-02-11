#include <stdio.h>
int fun(int t) {
    for(;t;t/=10) {
        if(t%10==7) return 1;
    }
    return 0;
}
int main() { 
    int n, f1, f2;
    scanf("%d", &n);
    f1=fun(n); f2=!(n%7);
    if(f1&&f2) printf("3");
    else if(f1) printf("2");
    else if(f2) printf("1");
    else printf("0");
}