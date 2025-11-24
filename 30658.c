#include <stdio.h>
int main() {
    int n, a[110], T;
    scanf("%d", &n);
    for(;n;) {
        for(int i=0;i<n;i++) {
            scanf("%d", &a[i]);
        }
        for(int i=n-1;i>=0;i--) {
            printf("%d\n", a[i]);
        }
        printf("0\n");
        scanf("%d", &n);
    }
}