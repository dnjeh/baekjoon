#include <stdio.h>
int a[100][100], n;
long long int b[100][100];
long long int dp(int x, int y) {
    long long int ret=0;
    if(b[y][x]) ret=(b[y][x]!=-1?b[y][x]:0);
    else if(!a[y][x]) {
        ret=0;
        b[y][x]=-1;
    }
    else {
        if(x+a[y][x]<n) ret+=dp(x+a[y][x], y);
        if(y+a[y][x]<n) ret+=dp(x, y+a[y][x]);
        b[y][x]=ret?ret:-1;
    }
    return ret;
}
int main() {
    int i, j;
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            scanf("%d", &a[i][j]);
        }
    }  
    b[n-1][n-1]=1;
    printf("%lld", dp(0, 0)); 
}