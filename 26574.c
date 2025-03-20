#include <stdio.h>
int main() {
    int n, t;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d", &t);
        printf("%d %d\n", t, t);
    }
}