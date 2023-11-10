#include <stdio.h>
int a[25][25], mem[25][25];
int n;
void set();
int dp(int y, int x) {
    int ret=a[y][x];
    if(mem[y][x]!=-1) ret=mem[y][x];
    else {
        if(y+1<n&&ret<dp(y+1, x)+a[y][x]) ret=dp(y+1, x)+a[y][x]; 
        if(y+1<n&&x+1<=y+1&&ret<dp(y+1, x+1)+a[y][x]) ret=dp(y+1, x+1)+a[y][x]; 
        mem[y][x]=ret;
    }
    return ret;
}
int main() {
    int i, j;
    scanf("%d", &n);
    set();
    for(i=0;i<n;i++) {
        for(j=0;j<=i;j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("%d", dp(0, 0));
}
void set() {
    int i, j;
    for(i=0;i<n;i++) {
        for(j=0;j<=i;j++) {
            mem[i][j]=-1;
        }
    }
}