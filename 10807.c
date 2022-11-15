#include <stdio.h>
int main() {
    int n, i, b, sum=0;
    scanf("%d", &n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &b);
    for(i=0;i<n;i++) {
        if(a[i]==b) sum++;
    }
    printf("%d", sum);
}