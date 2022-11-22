#include <stdio.h>
int main() {
    int i, j, i1, j1, n, m, t, min=32;
    scanf("%d %d", &n, &m);
    char a[n][m];
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            scanf("%c", &a[i][j]);
            if(a[i][j]!='W'&&a[i][j]!='B') j--;
        }
    }
    for(i=0;i<n-7;i++) {
        for(j=0;j<m-7;j++) {
            t=0;
            for(i1=i;i1<i+8;i1++) {
                for(j1=j;j1<j+8;j1++) {
                    if(a[i1][j1]!=((i1+j1)%2?'W':'B')) t++;
                }
            }
            if(t<min) min=t;
            else if((64-t)<min) min=64-t;
        }
    }
    printf("%d", min);
}