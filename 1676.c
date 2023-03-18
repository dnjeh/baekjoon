#include <stdio.h>
int main() {
    int n, sum=0, t;
    scanf("%d", &n);
    for(;n;n--) {
        for(t=n;!(t%5);t/=5) sum++;
    }
    printf("%d", sum);
}