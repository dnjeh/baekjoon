#include <stdio.h>
int main() {
    long long int SUM=1;
    int n, k, i;
    scanf("%d %d", &n, &k);
    int a[k];
    for(i=0;i<k;i++) a[i]=0;
    for(i=0;i<n;i++) {
        a[i%k]++;
    }
    for(i=0;i<k;i++) SUM*=(long long int)a[i];
    printf("%lld", SUM);
}