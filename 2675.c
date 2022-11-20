#include <stdio.h>
int main() {
    int i, j, k, n, m;
    char a[22]={'\0'};
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        scanf("%d %s", &m, a);
        for(j=0;a[j]!='\0';j++) {
            for(k=0;k<m;k++) {
                printf("%c", a[j]);
            }
        }
        printf("\n");
    }
}