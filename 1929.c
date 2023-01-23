#include <stdio.h>
#include <math.h>
int a[1000001];
int main() {
    int i, j, n, m;
    for(i=2;i<=1000000;i++) a[i]=i;
    for(i=2;i<=1000;i++) {
        if(a[i]) for(j=2;(j*i)<=1000000;j++) {
            a[j*i]=0;
        }
    }
    scanf("%d %d", &n, &m);
    for(i=n;i<=m;i++) if(a[i]) printf("%d\n", i);
}