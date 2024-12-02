#include <stdio.h>
int abs(int t) {
    return t<0?t*-1:t;
}
int a[200010];
int main() {
    int n, m, min=-1, max=0, t, tt;
    long long int sum=0;
    scanf("%d %d", &n, &m);
    for(int i=1;i<=n*2+1;i++) {
        scanf("%d", &a[i]);
    }
    for(int i=0;i<m;i++) {
        scanf("%d %d", &t, &tt);
        sum+=tt*(long long int)abs(a[n+1]-a[t]);
        if(min==-1||t<min) min=t;
        if(max<t) max=t;
    }
    printf("%lld", sum+(min<n+1?abs(a[min]-a[n+1])*2:0)+(max>n+1?abs(a[max]-a[n+1])*2:0));
}
