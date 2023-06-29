#include <stdio.h>
int a[1000][3], mem[1000][2], n;
int dp(int _t) {
    int ret, col, t;
    if(mem[_t][0]) { ret=mem[_t][0]; col=mem[_t][1]*1000000; }
    else {
        
        mem[_t][0]=ret;
        mem[_t][1]=col;
    }
    return ret+col*1000000;
}
int main() {
    int i, j;
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        for(j=0;j<3;j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("%d", dp(n-1));
}