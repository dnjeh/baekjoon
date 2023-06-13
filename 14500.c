#include <stdio.h>
int a[500][500], n, m;
int find(int y, int x, int cnt, int dic) {
    if(cnt>=3) {
        return a[y][x];
    }
    else {
        
    }
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
        }
    }
    printf("%d", max);
}