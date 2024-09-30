#include <stdio.h>
int way[250][250], mon[250][250];
int n, m;
void flod() {
    int i, j, k;
    for(k=0;k<n;k++) for(i=0;i<n;i++) for(j=0;j<n;j++) {
        if((mon[i][k]!=-1&&mon[k][j]!=-1)&&(mon[i][j]==-1||mon[i][j]>mon[i][k]+mon[k][j])) {
            mon[i][j]=mon[i][k]+mon[k][j];
        }
    }
}
void pre();
int main() {
    int i, j, t1, t2, t3, l;
    scanf("%d %d", &n, &m);
    pre();
    for(i=0;i<m;i++) {
        scanf("%d %d %d", &t1, &t2, &t3);
        t1--; t2--;
        way[t1][t2]=1;
        way[t2][t1]=1;
        mon[t1][t2]=0;
        mon[t2][t1]=!t3;
    }
    flod();
    scanf("%d", &l);
    for(int i=0;i<l;i++) {
        scanf("%d %d", &t1, &t2);
        t1--; t2--;
        printf("%d\n", mon[t1][t2]);
    }
}
void pre() {
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            mon[i][j]=-1;
        }
        mon[i][i]=0;
    }
}