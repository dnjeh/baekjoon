#include <stdio.h>
int main() {
    long long int sum=1, i, a;
    scanf("%d", &a);
    for(i=1;i<=a;i++) {
        sum*=i;
    }
    printf("%d", sum);
}