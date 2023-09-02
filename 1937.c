#include <stdio.h>
int a[500][500], mem[500][500], n;
int dp(int y, int x) {
    int ret=0, t;
    if(mem[y][x]!=-1) return mem[y][x];
    else {
        if(y-1>=0&&a[y-1][x]>a[y][x]&&(t=dp(y-1, x))+1>ret) ret=t+1;
        if(y+1<n&&a[y+1][x]>a[y][x]&&(t=dp(y+1, x))+1>ret) ret=t+1;
        if(x-1>=0&&a[y][x-1]>a[y][x]&&(t=dp(y, x-1))+1>ret) ret=t+1;
        if(x+1<n&&a[y][x+1]>a[y][x]&&(t=dp(y, x+1))+1>ret) ret=t+1;
        mem[y][x]=ret;
    }
    return ret;
}
void set();
int main() {
    int i, j, max, t;
    scanf("%d", &n);
    set();
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for(i=0;i<n;i++) for(j=0;j<n;j++) {
        t=dp(i, j);
        if(!i&&!j||t>max) max=t;
    }
    printf("%d", max+1);
}
void set() {
    int i, j;
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            mem[i][j]=-1;
        }
    }
}