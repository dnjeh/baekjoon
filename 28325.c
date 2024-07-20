#include <stdio.h>
long long int a[250000];
int n;
int main() {
    long long int sum=0, f=0, ff=1, fff=0;
    scanf("%d", &n);
    for(int i=0, ii=0;i<n;i++, ii++) {
        scanf("%lld", &a[ii]);
        if(a[ii]) f=1;
        if(!f&&a[ii]==0) ii--;
    }
    for(int i=0;i<n;i++) {
        if(a[i]) {
            ff=1;
            sum+=a[i];
        }
        else if(i+1==n&&ff&&fff) {}
        else if(ff) {
            ff=0;
            if(!i) fff=1;
            sum++;
        }
        else ff=1;
    }
    printf("%lld", sum);
}