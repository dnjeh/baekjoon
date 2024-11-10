#include <stdio.h>
int a[1000000];
long long int fun(int a[], int n, long long int fix, long long int k) {
    long long int ret=0;
    for(int i=0;i<n;i++) {
        if(ret>=k) return 0;
        long long int def=a[i]-a[i-1];
        if(!i||def>fix) ret+=fix*(fix+1)/2;
        else ret+=(fix-def)*(fix-def+1)/2;
    }
    return ret<k;
} 
int main() {
    long long int n, k;
    scanf("%lld %lld", &n, &k);
    for(int i=0;i<n;i++) {
        scanf("%d", &a[i]);
    }
    long long int mid, up, dwn;
    for(up=k/n+1, dwn=1;up>dwn;) {
        mid=(up+dwn)/2;
        if(fun(a, n, mid, k)) dwn=mid+1;
        else up=mid;
    }
    printf("%lld", up);
}