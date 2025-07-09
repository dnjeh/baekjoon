#include <stdio.h>
int main() {
    int n, sum=0, t;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d", &t);
        sum+=t;
    }
    printf("%d", sum);
}