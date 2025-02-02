#include <stdio.h>
int main() {
    int n, sum=2;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        sum+=1<<i;
    }
    printf("%d", sum*sum);
}