#include <stdio.h>
int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int a[m];
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            scanf("%01d", &a[j]);
        }
        for(int j=m-1;j>=0;j--) {
            printf("%01d", a[j]);
        }
        printf("\n");
    }
}