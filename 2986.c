#include <stdio.h>
#include <math.h>
int main() {
    int n;
    scanf("%d", &n);
    if(n==1) {
        printf("0");
        return 0;
    }
    for(int i=2;i<=sqrt(n)+1;i++) {
        if(!(n%i)) {
            printf("%d", n-n/i);
            return 0;
        }
    }
    printf("%d", n-1);
}