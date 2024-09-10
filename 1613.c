#include <stdio.h>
#define MAX 400
int a[MAX][MAX], d[MAX][MAX];
int n, m;
void flod() {
    int i, j, k;
    for(k=0;k<n;k++) for(i=0;i<n;i++) for(j=0;j<n;j++) {
        if((d[i][k]!=0&&d[k][j]!=0)&&(!d[i][j]||d[i][j]>d[i][k]+d[k][j])) {
            d[i][j]=d[i][k]+d[k][j];
        }
    }
}
int main() {
    int i, j, t1, t2, s;
    scanf("%d %d", &n, &m);
    for(i=0;i<m;i++) {
        scanf("%d %d", &t1, &t2);
        t1--; t2--;
        a[t1][t2]=1;
        d[t1][t2]=1;
    }
    flod();
    scanf("%d", &s);
    for(i=0;i<s;i++) {
        scanf("%d %d", &t1, &t2);
        t1--; t2--;
        if(d[t1][t2]) printf("-1\n");
        else if(d[t2][t1]) printf("1\n");
        else printf("0\n");
    }
}
