#include <stdio.h>
int main() {
    int T, n, m, o, p;
    scanf("%d", &T);
    for(int t=0;t<T;t++) {
        scanf("%d %d %d %d", &n, &m, &o, &p);
        p=o<p?o:p;
        printf("Case #%d: %d\n", t+1, n*m*p);
        for(int i=1;i<=n;i++) for(int j=1;j<=m;j++) for(int k=1;k<=p;k++) {
            printf("%d %d %d\n", i, j, (i+j+k-2)%o+1);
        }
    }
}