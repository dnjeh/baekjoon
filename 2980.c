#include <stdio.h>
int a[1001][2];
int main() {
    int t, tt, l, n, i, j, ti=0, cnt=0;
    scanf("%d %d", &n, &l);
    for(i=0;i<n;i++) {
        for(j=0;j<3;j++) {
            scanf("%d", j?&tt:&t);
            if(j) a[t][j-1]=tt; 
        }
    }
    for(;cnt<l;ti++) {
        if((a[cnt][0]&&ti%(a[cnt][0]+a[cnt][1])>=a[cnt][0])||!a[cnt][0]) cnt++;
    }
    printf("%d", ti);
}