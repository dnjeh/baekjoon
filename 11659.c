#include <stdio.h>
int a[100000], b[100000];
int main() {
    int n, m, t[2]={0, }, i;
    scanf("%d %d", &n, &m);
    for(i=0;i<n;i++) {
        scanf("%d", &a[i]);
        b[i]=(i?(b[i-1]+a[i]):a[i]);
    }
    for(i=0;i<m;i++) {
        scanf("%d %d", &t[0], &t[1]);
        printf("%d\n", (*t-1)?b[t[1]-1]-b[(*t)-2]:b[t[1]-1]);
    }
}