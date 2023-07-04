#include <stdio.h>
int a[100000][3], mem[2][3], n;
int dp(int _t, int _c, int _m) {
    int ret, t, i, j;
    for(i=0;i<3;i++) mem[0][i]=a[0][i];
    for(i=1;i<100000&&i<=_t;i++) {
        for(j=0;j<3;j++) {
            mem[1][j]=mem[0][1]+a[i][j];
            if(_m&&j<=1&&mem[1][j]>mem[0][0]+a[i][j]) mem[1][j]=mem[0][0]+a[i][j];
            if(!_m&&j<=1&&mem[1][j]<mem[0][0]+a[i][j]) mem[1][j]=mem[0][0]+a[i][j];
            if(_m&&j>=1&&mem[1][j]>mem[0][2]+a[i][j]) mem[1][j]=mem[0][2]+a[i][j];
            if(!_m&&j>=1&&mem[1][j]<mem[0][2]+a[i][j]) mem[1][j]=mem[0][2]+a[i][j];
        }
        for(j=0;j<3;j++) mem[0][j]=mem[1][j];
    }
    return mem[0][_c];
}
int main() {
    int i, j, min=0, max=0, t;
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        for(j=0;j<3;j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for(i=0;i<3;i++) {
        if((t=dp(n, i, 1))<min||!i) {
            min=t; 
        }
    }
    for(i=0;i<3;i++) {
        if((t=dp(n, i, 0))>max||!i) {
            max=t; 
        }
    }
    printf("%d %d", max, min);
}