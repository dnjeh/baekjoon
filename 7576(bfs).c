#include <stdio.h>
int a[1000][1000], b[1001000][2];
int n, m, zero, ind, cnt, f, daind, aind;
int main() {
    int i, j;
    scanf("%d %d", &m, &n);
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            scanf("%d", &a[i][j]);
            if(!a[i][j]) {
                zero++;
            }
            else if(a[i][j]) {
                b[ind][0]=i;
                b[ind++][1]=j;
            }
        }
    }
    for(cnt=0;!f;cnt++) {
        for(daind=ind;!f&&aind<daind;aind++) {
            if(!zero) f=1;
            else {
                
            }
        }
    }
    printf("%d", cnt);
}