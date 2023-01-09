#include <stdio.h>
int a[10];
int main() {
    int n, i;
    scanf("%d", &n);
    for(;n;n/=10) {
        a[n%10]++;
    }
    for(i=9;i>=0;i--) {
        for(;a[i];a[i]--) {
            printf("%d", i);
        }
    }
}