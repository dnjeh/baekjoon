#include <stdio.h>
#include <stdio.h>
int a[50][50], m, n;
void find(int _i, int _j) {
    if(a[_i][_j]) a[_i][_j]=0;
    else return;
    if((_i-1)>=0) find(_i-1, _j);
    if((_j-1)>=0) find(_i, _j-1);
    if((_i+1)<n) find(_i+1, _j);
    if((_j+1)<m) find(_i, _j+1);
    return;
}
int main() {
    int T, k, t1, t2, i, j, J, tsum;
    scanf("%d", &T);
    for(i=0;i<T;i++) {
        tsum=0;
        scanf("%d %d %d", &m, &n, &k);
        for(j=0;j<n;j++) for(J=0;J<m;J++) a[i][j]=0;
        for(j=0;j<k;j++) {
            scanf("%d %d", &t1, &t2);
            a[t2][t1]=1;
        }
        for(j=0;j<n;j++) for(J=0;J<m;J++) {
            if(a[j][J]) {
                find(j, J);
                tsum++;
            } 
        }
        printf("%d\n", tsum);
    }
}