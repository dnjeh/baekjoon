#include <stdio.h>
int a[16][16], mem[3][16][16], n;
void set();
int dp(int t, int y, int x) {
    int ret=0;
    if(mem[t][x][y]!=-1) ret=mem[t][x][y];
    else {

    }
    return ret;
}
int main() {   //mem[0]이 가로, 1이 대각선, 2가 세로
    int i, j, sum=0;
    scanf("%d", &n); set();
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for(i=0;i<3;i++) sum+=dp(i, n-1, n-1);
    printf("%d", );
}

void set() {
    int i, j, k;
    for(i=0;i<3;i++) {
        for(j=0;j<n;j++) for(j=0;j<n;j++) {
            mem[i][j][k]=-1;
        }
    }
    mem[0][0][1]=1;
}