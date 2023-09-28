#include <stdio.h>
int a[10][10], dx[10], dy[10], xy[20];
int n, max;
void bac(int y, int x, int cnt, int f) {
    if((y*n+x)>=(n*n)) {
        if(max<cnt) max=cnt;
    }
    else {
        if(a[y][x]&&((x>=y)?(!dx[x-y]):(!dy[y-x]))&&!xy[x+y]) {
            if(x>=y) dx[x-y]=1;
            else dy[y-x]=1;
            xy[x+y]=1;
            bac(y+(x+2)/n, (x+2)>=n?!((y+1)%2)?f:!f:(x+2), cnt+1, f);    
            if(x>=y) dx[x-y]=0;
            else dy[y-x]=0;
            xy[x+y]=0;
        }
        bac(y+(x+2)/n, (x+2)>=n?!((y+1)%2)?f:!f:(x+2), cnt, f);    
    }
}
int main() {
    int i, j, ans=0;
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            scanf("%d", &a[i][j]);
        }   
    }
    bac(0, 1, 0, 1);
    ans+=max; 
    max=0;
    bac(0, 0, 0, 0);
    ans+=max;
    printf("%d", ans);
}