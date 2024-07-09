#include <stdio.h>
#define MAX 10000000000000000
long long int a[100], aind=0;
void set();
int main() {
    long long int T, k, x, f;
    set();
    scanf("%lld", &T);
    for(long long int i=0;i<T;i++) {
        f=0;
        scanf("%lld %lld", &k, &x);
        for(long long int i=0;i<aind&&!f;i++) {
            if(k==1&&a[i]==x) {
                f=1;
            }
            else if(k!=1) for(long long int j=0;j<aind&&!f;j++) {
                if(k==2&&a[i]+a[j]==x) f=1;
                else if(k!=2) for(long long int k=0;k<aind&&!f;k++) {
                    if(a[i]+a[j]+a[k]==x) f=1;
                }
            }
        }
        if(f) printf("YES\n");
        else printf("NO\n");
    }
}
void set() {
    a[0]=1; a[1]=1;
    aind+=2;
    for(long long int i=2;a[i-1]<=MAX;i++) {
        a[i]=a[i-1]+a[i-2];
        aind++;
    }
}