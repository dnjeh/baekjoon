#include <stdio.h>
int main() {
    int n, i, m, t;
    scanf("%d %d", &n, &m);
    for(i=0;i<n;i++) {
        scanf("%d", &t);
        if(t<m) printf("%d ", t);
    }
}