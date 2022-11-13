#include <stdio.h>
int main() {
    int n, t1, t2, i;
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        scanf("%d %d", &t1, &t2);
        printf("%d\n", t1+t2);
    }
}