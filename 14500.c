#include <stdio.h>
int a[500][500], n, m;
int find(int y, int x, int cnt, int dic) {
    int ret=0;
    if(cnt>=3) {
        ret=a[y][x];
    }
    else {
        if(dic!=1&&y-1>=0) {
            if(!ret||ret)
        }
    }
    return ret;
}
int dfind(int i, int j) {

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
            if(max<(t=dfind(i, j))) {
                max=t;
            }
        }
    }
    printf("%d", max);
}

// 1
//4 2
// 3