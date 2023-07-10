#include <stdio.h>
long long int a[10000][2];
int main() {
    long long int n, i, sum=0, p;
    scanf("%lld", &n);
    for(i=0;i<n;i++) {
        scanf("%lld %lld", &a[i][0], &a[i][1]);
    }
    for(i=0;i<(n-1);i++) {
        sum+=a[i][0]*a[i+1][1]-a[i+1][0]*a[i][1];
    } sum+=a[n-1][0]*a[0][1]-a[0][0]*a[n-1][1];
    if(sum<0) sum*=-1;
    p=sum/2;
    printf("%lld.%d", p, p*2==sum?0:5);
}
