#include <stdio.h>
int main() {
    int n, t;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d", &t);
        printf("%d\n", (t/2+1)*(t/2+1));
    }
}