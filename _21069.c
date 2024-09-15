#include <stdio.h>
int fun(long long int t) {
    int ret=0, temp=0;
    if(!(t%2)) {
        ret++;
        for(long long int i=2;!(t%2);t/=2) {}
    }
    for(long long int i=3;i*i<=t&&t!=1;i+=2) {
        if(!(t%i)) {
            t/=i;
            i-=2;
            if(temp!=i) ret++;
            temp=i;
        }
    }
    if(t>1) ret++;
    return ret;
}
int main() {
    int T;
    long long int n;
    scanf("%d", &T);
    if(T>4000) return 1;
    for(int i=0;i<T;i++) {
        scanf("%lld", &n);
        n=n*n+n;
        printf("%d\n", fun(n));
    }
}