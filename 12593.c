#include <stdio.h>
int main() {
    int T, r, k, n, a[10]={0, }, aind=0, sum=0;
    scanf("%d", &T);
    for(int i=0;i<T;i++) {
        sum=aind=0;
        scanf("%d %d %d", &r, &k, &n);
        for(int j=0;j<n;j++) {
            scanf("%d", &a[j]);   
        }
        for(int j=0;j<r;j++) {
            for(int ik=0, tsum=0;ik<n&&tsum+a[aind%n]<=k;ik++, aind++) {
                tsum+=a[aind%n];
                sum+=a[aind%n];
            }
        }
        printf("Case #%d: %d\n", i+1, sum);
    }
}