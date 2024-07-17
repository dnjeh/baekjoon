#include <stdio.h>
int a[200000];
int main() {
    long long int n, k, sum=0, max=0;
    scanf("%lld %lld", &n, &k);
    for(int i=0;i<n;i++) {
        scanf("%d", &a[i]);
        if(!i||max<a[i]-i*k) max=a[i]-i*k; 
    }
    for(int i=0;i<n;i++) {
        sum+=max+i*k-a[i];
    }
    printf("%lld", sum);
}