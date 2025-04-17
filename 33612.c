#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    printf("%d %d", 2024+(7*n)/12, (7*n)%12+1);
}