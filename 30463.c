#include <stdio.h>
long long int a[1024];
int fun(long long int t) {
    long long int ret=0;
    for(;t;t>>=1) if(t&1) ret++;
    return ret;
}
int main() {
    long long int cnt=0;
    long long int n, k, it;
    char t[15];
    scanf("%lld %lld", &n, &k);
    for(int i=0;i<n;i++) {
        it=0;
        scanf("%s", t);
        for(int j=0;t[j];j++) {
            it|=1<<(t[j]-48);
        }
        a[it]++;
    }
    for(int i=0;i<1024;i++) {
        for(int j=i;j<1024;j++) {
            if(fun(i|j)==k&&a[i]&&a[j]) {
                if(i-j) 
                cnt+=a[i]*a[j];
                else 
                cnt+=a[i]*(a[i]-1)/2;
            }
        }
    }
    printf("%lld", cnt);
}