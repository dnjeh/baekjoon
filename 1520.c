#include <stdio.h>
int a[500][500], mem[500][500];
int n, m;
int dp(int y, int x) {
    int ret=0;
    if(mem[y][x]!=-1) return mem[y][x];
    else {
        if(y-1>=0&&a[y-1][x]>a[y][x]) ret+=dp(y-1, x);
        if(y+1<n&&a[y+1][x]>a[y][x]) ret+=dp(y+1, x);
        if(x-1>=0&&a[y][x-1]>a[y][x]) ret+=dp(y, x-1);
        if(x+1<m&&a[y][x+1]>a[y][x]) ret+=dp(y, x+1);
        mem[y][x]=ret;
    }
    return ret;
}
void set();
int main() {
    int i, j;
    scanf("%d %d", &n, &m);
    set();
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("%d", dp(n-1, m-1));
}
void set() {
    int i, j;
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            mem[i][j]=-1;
        }
    }
    mem[0][0]=1;
}