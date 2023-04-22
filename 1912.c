#include <stdio.h>
int a[100000], sum[100000];
int main() {
    int n, i, max=0;
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        scanf("%d", &a[i]);
        if(i&&a[i]<(sum[i-1]+a[i])) sum[i]=a[i]+sum[i-1];
        else sum[i]=a[i];
        if(!i||max<sum[i]) max=sum[i];
    }
    printf("%d", max);
}