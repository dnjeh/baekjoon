#include <stdio.h>
#include <math.h>
int main() {
    long long int n, l, a[10]={0, }, f;
    scanf("%lld", &n);
    for(long long int t=n;t;t/=10) {
        a[t%10]=1;
    }
    for(long long int i=0;;i++) {
        l=powl(10, i);
        for(long long int j=0;j<l;j++) {
            n=n*l+j; f=0;
            for(int k=1;k<10&&!f;k++) {
                if(a[k]&&(n%k)) f=1;
            }
            if(!f) {
                printf("%lld", n);
                return 0;
            }
            n/=l;
        }
    }
}
