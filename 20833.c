#include <stdio.h>
int main() {
    int sum=0, n;
    scanf("%d", &n);
    for(int i=1;i<=n;i++) {
        sum+=i*i*i;
    }
    printf("%d", sum);
}