#include <stdio.h> 
int min(int a, int b) { return a<b?a:b; }
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", min(a-1, b)*2+1);
}