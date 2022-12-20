#include <stdio.h>
int main() {
    int a[2][10]={0, }, i, j, sum[2]={0, }, t=-1;
    for(i=0;i<2;i++) {
        for(j=0;j<10;j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for(i=0;i<10;i++) {
        if(a[0][i]>a[1][i]) {
            sum[0]+=3;
            t=0;
        }
        else if(a[0][i]<a[1][i]) {
            sum[1]+=3;
            t=1;
        }
        else {
            sum[0]++;
            sum[1]++;
        }
    }
    printf("%d %d\n%c", sum[0], sum[1], sum[0]==sum[1]?(!t?'A':(~t?'B':'D')):sum[0]>sum[1]?'A':'B');
}