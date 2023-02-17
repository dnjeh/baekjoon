#include <stdio.h>
int main() {
    int T, n, m, i, j, tsum, tcnt;
    scanf("%d", &T);
    for(i=0;i<T;i++) {
        tcnt=tsum=0;
        scanf("%d %d", &n, &m);
        int a[m][2];
        for(j=0;j<m;j++) {
            scanf("%d %d", &a[j][0], &a[j][1]);
        }
        for(j=0;j<m;j++) {
            if(!j) tcnt+=a[j][0];
            else tcnt+=a[j][0]-a[j-1][0];
            if(tsum+a[j][1]>n) {
                tcnt+=a[j][0]*2;
                tsum=a[j][1];
            }
            else tsum+=a[j][1];
            if(tsum>=n) {
                if(j+1>=m) tcnt+=a[j][0];
                else tcnt+=a[j][0]*2;
                tsum=0;
            }
            else if(j+1>=m) tcnt+=a[j][0];
        }
        printf("%d\n", tcnt);
    }
}