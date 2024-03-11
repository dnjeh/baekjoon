#include <stdio.h>
#include <math.h>
int a[100001], mem[100001];
int n, m;
int dp(int t) {
    int ret=1, i, to, tt;
    if(t<=100000&&mem[t]) ret=mem[t];
    else {
        to=(int)sqrt(t)+1;
        for(i=2;i<=to;i++) {
            if(!(t%i)) {
                for(tt=0;!(t%i);tt++) t/=i;
                if(!ret) ret+=tt;
                else ret*=tt;
            }
        }
        if(ret) ret-1;
        if(t<=100000) mem[t]=ret;
    }
    return ret;
}
int main() {
    int i, t, j, cnt=0;
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        scanf("%d", &t);
        a[t]=1;
    }
    scanf("%d", &m);
    for(i=0;i<m;i++) {
        cnt=0;
        scanf("%d", &t);
        for(j=1;j<t;j++) {
            if(a[j]&&!(t%j)) {    
                cnt+=dp(t/j);
            }
        }
        if(a[t]) cnt++;
        printf("%d ", cnt);
    }
}