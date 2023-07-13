#include <stdio.h>
int a[16][16], mem[3][16][16], n;
void set();  //mem[0]이 가로, 1이 대각선, 2가 세로
int dp(int t, int y, int x) {
    if(a[y][x]) { mem[t][y][x]=0; }
    int ret=0;
    if(mem[t][y][x]!=-1) ret=mem[t][y][x];
    else {
        if(t==0&&x-1>=0&&!a[y][x]) {
            ret+=dp(0, y, x-1);
            ret+=dp(1, y, x-1);
        }
        if(t==1&&x-1>=0&&y-1>=0&&!a[y][x-1]&&!a[y-1][x]&&!a[y][x]) {
            ret+=dp(0, y-1, x-1);
            ret+=dp(1, y-1, x-1);
            ret+=dp(2, y-1, x-1);
        }
        if(t==2&&y-1>=0&&!a[y][x]) {
            ret+=dp(2, y-1, x);
            ret+=dp(1, y-1, x);
        }
        mem[t][y][x]=ret;
    }
    return ret;
}
int main() {   
    int i, j, sum=0;
    scanf("%d", &n); set();
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for(i=0;i<3;i++) {
        sum+=dp(i, n-1, n-1);
    }
    printf("%d", sum);
}

void set() {
    int i, j, k;
    for(i=0;i<3;i++) {
        for(j=0;j<n;j++) for(k=0;k<n;k++) {
            mem[i][j][k]=-1;
        }
    }
    mem[0][0][1]=1;
}
