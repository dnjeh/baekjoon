#include <stdio.h>
int a[100001];
int main() {
    long long int n, i, sum=0, cnt=0, t;
    scanf("%lld", &n);
    for(i=0;i<n;i++) {
        scanf("%lld", &t);
        a[t]++;
    }
    for(i=100000;i>=1;i--) {
        if(a[i]&&((i-cnt)>0)) {
            sum+=(i-cnt++);
            a[i]--;
            i++;
        }
        else if((i-cnt)<0) break;
    }
    printf("%lld", sum);
}