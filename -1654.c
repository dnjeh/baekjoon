#include <stdio.h>
long long int a[10000];
int main() {
    long long int n, m, i, j, max=0, sum=0, t=0;
    scanf("%lld %lld", &n, &m);
    
    for(i=0;i<n;i++) {
        scanf("%lld", &a[i]);
        sum+=a[i];
    }
    for(i=sum/n;i>=1&&t<=m;i--) {
        t=0;
        for(j=0;j<n;j++) {
            t+=a[j]/i;
        }
        if(max<i&&t>=m) {
            max=i;
            if(t==m) {
                break;
            }
        }
    }
    printf("%lld", max);
}