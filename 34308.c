#include <stdio.h>
int main() {
    int n, k, t;
    scanf("%d %d", &n, &k);
    for(int i=0;i<k;i++) {
        scanf("%d", &t);
        printf("%d ", (n+1)/2>=t?1:n);
    }
}