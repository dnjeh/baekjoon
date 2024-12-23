#include <stdio.h>
long long int a[1000000];
int main() {
    long long int n, ans=0;
    scanf("%lld", &n);
    for(int i=0;i<n;i++) {
        scanf("%lld", &a[i]);
    }
    for(int sta=0, end=n-1;sta<=end;) {
        if(a[sta]==a[end]) {
            sta++;
            end--;
        }
        else if(a[sta]+a[sta+1]<=a[end]) {
            a[sta+1]+=a[sta];
            sta++;
            ans++;
        }
        else {
            a[end-1]+=a[end];
            end--;
            ans++;
        }
    }
    printf("%lld", ans);
}