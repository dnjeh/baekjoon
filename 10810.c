#include <stdio.h>
int main() {
    int n, m, i, j, t, tt, ttt;
    scanf("%d %d", &n, &m);
    int a[n];
    for(i=0;i<n;i++) a[i]=0;
    for(i=0;i<m;i++) {
        scanf("%d %d %d", &t, &tt, &ttt);
        for(j=t-1;j<tt;j++) {
            a[j]=ttt;
        }
    }
    for(i=0;i<n;i++) {
        printf("%d ", a[i]);
    }
}