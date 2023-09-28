#include <stdio.h>
int a[10][10], dx[10], dy[10], xy[20];
int n, max;
void bac(int y, int x, int cnt) {
    if((y*n+x)>=(n*n)) {
        if(max<cnt) max=cnt;
    }
    else {
        if(a[y][x]&&(x>=y?!dx[x-y]:!dy[y-x])&&!xy[x+y]) {
            if(x>=y) dx[x-y]=1;
            else dy[y-x]=1;
            xy[x+y]=1;
            bac(y+(x+1)/n, (x+1)%n, cnt+1);    
            if(x>=y) dx[x-y]=0;
            else dy[y-x]=0;
            xy[x+y]=0;
        }
        bac(y+(x+1)/n, (x+1)%n, cnt);
    }
}
int main() {
    int i, j;
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            scanf("%d", &a[i][j]);
        }   
    }
    bac(0, 0, 0);
    printf("%d", max);
}