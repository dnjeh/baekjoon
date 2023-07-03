#include <stdio.h>
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
int main() {
    int i, j, min=0;
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        for(j=0;j<3;j++) {
            scanf("%d", &a[i][j]);
            if(!i) mem[i][j]=a[i][j];
        }
    }
    for(i=0;i<3;i++) {
        if(dp(n-1, i)<min||!i) {
            min=dp(n-1, i); 
        }
    }
    printf("%d", min);
}