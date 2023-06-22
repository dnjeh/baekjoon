#include <stdio.h>

int a[50][50], b[13][2], c[13][2], n, m, min, ind, f;

void extend() {
    int i, j, sum, tsum;
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            if(a[i][j]) {
                for(int k=0, tsum=0;k<ind;k++) {
                    
                }
            }
        }
    }
}
void find(int cnt) {
    int tt;
    if(cnt==m) extend();
    else for(int i=0;i<ind;i++) {
        if(b[i][0]!=-1) {
            c[cnt][0]=tt=b[i][0];
            c[cnt][1]=b[i][0];
            b[i][0]=-1;
            find(cnt+1);
            b[i][0]=tt;
        }
    }
}

int main() {
    int i, j, ind=0;
    scanf("%d %d", &n, &m);
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            scanf("%d %d", &a[i][j]);
            if(a[i][j]) {
                b[ind][0]=i;
                b[ind++][1]=j;
                a[i][j]=0;
            }
        }
    }
    find(0);
    printf("%d", min);
}