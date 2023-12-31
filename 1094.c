#include <stdio.h>
int main() {
    int x, sum=0;
    scanf("%d", &x);
    for(;x;x>>=1) {
        sum+=x&1;
    }
    printf("%d", sum);
}