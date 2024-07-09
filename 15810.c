#include <stdio.h>
long long int a[1000000], n, m, end;
long long int bs();
int main() {
    scanf("%lld %lld", &n, &m);
    for(long long int i=0;i<n;i++) {
        scanf("%lld", &a[i]);
    } end=1000000000000;
    printf("%lld", bs());
}


long long int bs() {
    long long int up, dwn, mid, sum=0;
    up=end; dwn=0;
    for(mid=(dwn+up)/2;dwn<=up;mid=(dwn+up)/2) {
        sum=0;
        for(int i=0;i<n;i++) {
            sum+=mid/a[i];
        }

        if(sum<m) dwn=mid+1;
        else up=mid-1;
    }
    return dwn;
}