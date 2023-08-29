#include <stdio.h>
int way[100][100], mon[100][100], a[100];
int n, m, r;
void flod() {
    int i, j, k;
    for(k=0;k<n;k++) for(i=0;i<n;i++) for(j=0;j<n;j++) {
        if((mon[i][k]!=0&&mon[k][j]!=0)&&(!mon[i][j]||mon[i][j]>mon[i][k]+mon[k][j])) {
            mon[i][j]=mon[i][k]+mon[k][j];
        }
    }
}
int main() {
    int i, j, t1, t2, t3, max, tmax;
    scanf("%d %d %d", &n, &m, &r);
    for(i=0;i<n;i++) {
        scanf("%d", &a[i]);
    }
    for(i=0;i<r;i++) {
        scanf("%d %d %d", &t1, &t2, &t3);
        t1--; t2--;
        if(!way[t1][t2]||!way[t1][t2]||mon[t1][t2]>t3) {
            way[t1][t2]=1;
            way[t2][t1]=1;
            mon[t1][t2]=t3;
            mon[t2][t1]=t3;
        }
    }
    flod();
    for(i=0;i<n;i++) {
        tmax=a[i];
        for(j=0;j<n;j++) {
            if(i==j) continue;
            if(mon[i][j]&&mon[i][j]<=m) tmax+=a[j];
        }
        if(!i||tmax>max) max=tmax;
    }
    printf("%d", max);
}