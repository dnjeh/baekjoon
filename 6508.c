#include <stdio.h>
int a[50];
int main() {
    long long int sum, tsum;
    int n;
    for(scanf("%d", &n);n;scanf("%d", &n)) {
        sum=tsum=0;
        for(int i=0;i<n;i++) {
            scanf("%d", &a[i]);
        }
        for(int i=n-1;i>=0;i--) {
            sum+=a[i]+tsum;
            tsum+=a[i]+tsum;
        }
        printf("%lld\n", sum);
    }
}