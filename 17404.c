#include <stdio.h>
#define INF 1000000000
int a[1000][3], mem[1000][3], n;
int dp(int _t, int _c) {
    int ret, t;
    if(mem[_t][_c]) ret=mem[_t][_c];
    else {
        ret=dp(_t-1, (_c+1)%3)+a[_t][_c];
        if((t=dp(_t-1, (_c+2)%3))+a[_t][_c]<ret) {
            ret=t+a[_t][_c];
        }
        mem[_t][_c]=ret;
    }
    return ret;
}
void set(int t);
int main() {
    int i, j, minseong=0, t;
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        for(j=0;j<3;j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for(i=0;i<3;i++) {
        set(i);
        for(j=0;j<3;j++) {
            if(i==j) continue;
            t=dp(n-1, j);
            if(t<minseong||(!i&&j==1)) {
                minseong=t; 
            }
        }
    }
    printf("%d", minseong);
}
void set(int t) {
    int i, j;
    for(i=0;i<3;i++) {
        if(i==t) mem[0][i]=a[0][i];
        else mem[0][i]=INF;
        for(j=1;j<1000;j++) {
            mem[j][i]=0;
        }
    }
}