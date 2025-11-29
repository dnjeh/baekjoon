#include <stdio.h>
int main() {
    int n, t, tt;
    scanf("%d", &n);
    for(int i=0;i<n-1;i++) {
        scanf("%d", &t);
    }
    scanf("%d", &tt);
    printf("%d", tt+tt-t);
}