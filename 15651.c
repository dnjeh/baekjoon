#include <stdio.h>
int n, m, a[7];
void bak(int t) {
    int i;
    if(t>=n) {
        for(i=0;i<n;i++) {
            printf("%d%c", a[i], i+1<n?' ':'\n');
        }
    }
    else {
        for(i=1;i<=m;i++) {
            a[t]=i;
            bak(t+1);
        }
    }
}
int main() {
    scanf("%d %d", &m, &n);
    bak(0);
}