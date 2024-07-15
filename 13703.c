#include <stdio.h>
long long int mem[200][100]; //매 층, 매 순간
long long int dp(int t, int tt) {
    long long int ret=0;
    if(mem[t][tt]!=-1) ret=mem[t][tt];
    else {
        if(t-1>0) ret+=dp(t-1, tt-1);
        if(t+1<200) ret+=dp(t+1, tt-1);
        mem[t][tt]=ret;
    }
    return ret;
}
void set();
int main() {
    int k, n;
    long long int sum=0;
    set();
    scanf("%d %d", &k, &n);
    mem[k][0]=1;
    for(int i=1;i<200;i++) {
        sum+=dp(i, n);
    }
    printf("%lld", sum);
}
void set() {
    for(int i=0;i<200;i++) {
        for(int j=0;j<100;j++) {
            mem[i][j]=-1;
            mem[0][j]=0;
        }
        mem[i][0]=0;
    }
}