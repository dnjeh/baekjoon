#include <stdio.h>
int main() {
    int T, n, i, j, tsum, t, nn;
    double avg;
    scanf("%d", &T);
    for(i=0;i<T;i++) {
        tsum=nn=0;
        scanf("%d", &n);
        int a[n];
        for(j=0;j<n;j++) {
            scanf("%d", &a[j]);
            tsum+=a[j];
        }
        avg=tsum/(double)n;
        for(j=0;j<n;j++) {
            if(a[j]>avg) nn++;
        }
        printf("%.3lf%%\n", (nn/(double)n)*100);
    }
}