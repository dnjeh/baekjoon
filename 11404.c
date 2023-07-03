#include <stdio.h>
int way[100][100], mon[100][100];
int n, m;
void flod() {
    int i, j, k;
    for(k=0;k<n;k++) for(i=0;i<n;i++) for(j=0;j<n;j++) {
        if((mon[i][k]!=0&&mon[k][j]!=0)&&(!mon[i][j]||mon[i][j]>mon[i][k]+mon[k][j])) {
            mon[i][j]=mon[i][k]+mon[k][j];
        }
    }
}
int main() {
    int i, j, t1, t2, t3;
    scanf("%d %d", &n, &m);
    for(i=0;i<m;i++) {
        scanf("%d %d %d", &t1, &t2, &t3);
        t1--; t2--;
        if(!way[t1][t2]||mon[t1][t2]>t3) {
            way[t1][t2]=1;
            mon[t1][t2]=t3;
        }
    }
    flod();
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            printf("%d%c", i!=j?mon[i][j]:0, j+1==n?'\n':' ');
        }
    }
}