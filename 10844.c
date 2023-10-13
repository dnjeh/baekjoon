#include <stdio.h>
int mem[100][10]={{0,1,1,1,1,1,1,1,1,1}};
int n;
int dp(int t, int tt) {
    int ret=0, d;
    if(mem[t][tt]!=-1) ret=mem[t][tt];
    else {
        for(d=-1;d<=1;d+=2) {
            if(tt+d<10&&tt+d>=0) ret=(ret+dp(t-1, tt+d))%1000000000;
        }
        mem[t][tt]=ret;
    }
    return ret;
}
void set();
int main() {
    int i, sum=0;
    scanf("%d", &n);
    set();
    for(i=0;i<10;i++) {
        sum=(sum+dp(n-1, i))%1000000000;
    }
    printf("%d", sum);
}

void set() {
    int i, j;
    for(i=1;i<10;i++) {
        mem[0][i]=1;
    }
    for(i=1;i<n;i++) {
        for(j=0;j<10;j++) {
            mem[i][j]=-1;
        }
    }
}