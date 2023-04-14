#include <stdio.h>
int main() {
    int n, c, w, i, amax=0, ta, tb;
    long long int t, max=0;
    scanf("%d %d %d", &n, &c, &w);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d", &a[i]);
        if(amax<a[i]) amax=a[i];
    }
    for(i=1;i<=amax;i++) {
        ta=tb=t=0;
        for(int j=0;j<n;j++) {
            ta=(a[j]/i)*i*w; tb=(a[j]/i+((a[j]%i)?0:-1))*c;
            if(ta-tb>0) t+=(long long int)(ta-tb);
        }
        if(i==1||max<t) max=t;
    }
    printf("%lld", max);
}