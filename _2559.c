#include <stdio.h>
int a[100100];
int main() {
    int n, k, i, max, tsum=0;
    scanf("%d %d", &n, &k);
    for(i=0;i<n;i++) {
        scanf("%d", &a[i]);
    }
    for(i=0;i<n;i++) {
        if(i<n) tsum+=a[i];
        if(i>=k) tsum-=a[i-k];
        if(i+1==k||max<tsum) max=tsum;
    }
    printf("%d", max);
}