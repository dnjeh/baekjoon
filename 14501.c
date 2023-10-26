#include <stdio.h>
int a[2][15], mem[15], n;
int dp(int t) {
    int ret=a[1][t], i, _t;
    if(mem[t]!=-1) ret=mem[t];
    else {
        for(i=t-1;i>=0;i--) {
            _t=dp(i)+a[1][t];
            if(a[0][i]+i<t+1&&_t>ret) ret=_t;
        }
        mem[t]=ret;
    }
    return ret;
};
void set();
int main() {
    int i, max=0, t;
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        scanf("%d %d", &a[0][i], &a[1][i]);
    } 
    set();
    for(i=0;i<n;i++) {
        if(a[0][i]+i<=n&&max<(t=dp(i))) {
            max=t;
        }
    }
    printf("%d", max);
}

void set() {
    int i;
    mem[0]=a[1][0];
    for(i=1;i<n;i++) {
        mem[i]=-1;
    }
}