#include <stdio.h>
long long int a[500000], mem[2][500000];
long long int dp(int t, int tt) {
    long long int ret=0;
    if(mem[t][tt]!=-1) ret=mem[t][tt];
    else {
        if(t) {
            if(a[tt-1]>=a[tt]) ret+=dp(1, tt-1);
            if(a[tt-1]>a[tt]) ret+=dp(0, tt-1);
        }
        else {
            ret++;
            if(a[tt-1]<=a[tt]) ret+=dp(0, tt-1);
        }
        mem[t][tt]=ret;
    }
    return ret;
}
void set(int n);
int main() {
    long long int ans=0;
    int n;
    scanf("%d", &n);
    set(n);
    for(int i=0;i<n;i++) {
        scanf("%lld", &a[i]);
    }
    for(int i=0;i<n;i++) {
        ans+=dp(0, i);
        ans+=dp(1, i);
    }
    printf("%lld", ans);
}   
void set(int n) {
    mem[0][0]=1; mem[1][0]=0;
    for(int i=1;i<n;i++) {
        mem[0][i]=mem[1][i]=-1;
    }
}