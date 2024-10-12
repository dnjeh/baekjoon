#include <stdio.h>
long long int a[2][100000], b[100000];
int main() {
    long long int mini=1;
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%lld", &b[i]);
    }
    for(int i=1;i<n;i++) {
        scanf("%lld", &a[0][i]);
        a[0][i]+=a[0][i-1];
    }  
    a[1][0]=b[0];
    for(int i=1;i<n;i++) {
        scanf("%lld", &a[1][i]);
        if(a[1][i-1]+a[1][i]>a[0][i]+b[i]) {
            mini=i+1;
            a[1][i]=a[0][i]+b[i];
        }
        else a[1][i]=a[1][i-1]+a[1][i];
    }
    printf("%lld %lld", mini, a[1][n-1]);
}