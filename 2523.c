#include <stdio.h>
int main() {
    int n, i, j, m;
    scanf("%d", &n);
    for(i=1;i<n*2;i++) {
        m=i<n?i:n*2-i;
        for(j=0;j<m;j++) printf("*");
        printf("\n");
    }
}