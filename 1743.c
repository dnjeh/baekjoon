#include <stdio.h>
#include <stdio.h>
int a[100][100], m, n;
int find(int _i, int _j) {
    int ret=0, di, dj;
    if(!a[_i][_j]) ret=0; 
    else {
        a[_i][_j]=0;
        ret=1;
        for(di=-1;di<=1;di++) for(dj=-1;dj<=1;dj++) {
            if(((di+dj)>0?(di+dj):(di+dj)*-1)!=1) continue;
            if(_i+di>=0&&_i+di<n&&_j+dj>=0&&_j+dj<m) {
                ret+=find(_i+di, _j+dj);
            }
        }
    }
    return ret;
}
int main() {
    int k, t1, t2, i, j, max=0, t;
    scanf("%d %d %d", &n, &m, &k);
    for(i=0;i<k;i++) {
        scanf("%d %d", &t1, &t2);
        a[t1-1][t2-1]=1;
    }
    for(i=0;i<n;i++) for(j=0;j<m;j++) {
        if(a[i][j]) {
            t=find(i, j);
            if(!max||max<t) max=t;
        } 
    }
    printf("%d\n", max);
}