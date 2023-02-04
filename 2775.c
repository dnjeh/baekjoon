#include <stdio.h>
int a[15][15];
int fun(int _t, int _tt) { //층, 방
    if(_tt!=1) {           //방의 끝이 아니라면
        return a[_t-1][_tt]+fun(_t, _tt-1);
    }
    else return a[_t-1][_tt];
}
int main() {
    int i, j, T, n, m;
    for(i=0;i<=14;i++) for(j=1;j<=14;j++) {
        if(!i) a[i][j]=j;
        else a[i][j]=fun(i, j);
    }
    scanf("%d", &T);
    for(i=0;i<T;i++) {
        scanf("%d %d", &n, &m);
        printf("%d\n", a[n][m]);
    }
}