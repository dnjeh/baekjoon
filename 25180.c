#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    if(n==1) printf("1");
    else printf("%d", n/2/9*2+(n/2%9*2<10?(n/2%9?1:0):(n%2?3:2)));
}