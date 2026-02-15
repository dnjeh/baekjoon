#include <stdio.h>
int main() {
    int T, n, m, t, tt;
    scanf("%d", &T);
    for(int i=0;i<T;i++) {
        scanf("%d", &n);
        for(int j=0;j<n;j++) {
            scanf("%d %d", &t, &tt);
        }
        scanf("%d", &m);
        for(int j=0;j<m;j++) {
            scanf("%d %d", &t, &tt);
        }
        printf("%s", n==m?"yes\n":"no\n");
    }
}