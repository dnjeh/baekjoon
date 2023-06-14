#include <stdio.h>
int a[500][500], n, m;
int find(int y, int x, int cnt, int dic) {
    int ret=0, t;
    if(cnt>=3) {
        ret=a[y][x];
    }
    else {
        if(dic!=1&&y-1>=0&&(t=find(y-1, x, cnt+1, 3))+a[y][x]>ret) {
            ret=t+a[y][x];
        }
        if(dic!=3&&y+1<n&&(t=find(y+1, x, cnt+1, 1))+a[y][x]>ret) {
            ret=t+a[y][x];
        }
        if(dic!=2&&x-1>=0&&(t=find(y, x-1, cnt+1, 4))+a[y][x]>ret) {
            ret=t+a[y][x];
        }
        if(dic!=4&&x+1<m&&(t=find(y, x+1, cnt+1, 2))+a[y][x]>ret) {
            ret=t+a[y][x];
        }
    }
    return ret;
}
int ofind(int y, int x) {
    int ret=0, t, cnt=0;
    for(int i=1;i<=4;i++) {
        cnt=0; t=a[y][x];
        if(i!=1&&y-1>=0) { t+=a[y-1][x]; cnt++; }
        if(i!=2&&y+1<n) { t+=a[y+1][x]; cnt++; }
        if(i!=3&&x-1>=0) { t+=a[y][x-1]; cnt++; }
        if(i!=4&&x+1<m) { t+=a[y][x+1]; cnt++; }
        if(cnt==3&&ret<t) ret=t;
    }
    return ret;
}
int main() {
    int i, j, max=0, t;
    scanf("%d %d", &n, &m);
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            if(max<(t=find(i, j, 0, 0))) {
                max=t;
            }
            if(max<(t=ofind(i, j))) {
                max=t;
            }
        }
    }
    printf("%d", max);
}