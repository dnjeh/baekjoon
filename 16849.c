#include <stdio.h>
double a[20][20];
int main() {
    double tmax=0, tsum=0;
    int _a[20], T, n;
    scanf("%d", &T);
    for(int i=0;i<T;i++) {
        tmax=-500000;
        scanf("%d", &n);
        for(int j=0;j<n;j++) {
            for(int k=0;k<n;k++) {
                scanf("%lf", &a[j][k]);
            }
        }
        for(int j=1;j<(1<<n);j++) {
            tsum=0;
            for(int k=0;k<n;k++) {
                _a[k]=(j>>k)&1;
            }
            for(int ii=0;ii<n;ii++) {
                for(int jj=ii;jj<n;jj++) {
                    if(_a[ii]&&_a[jj]) tsum+=a[ii][jj];
                }
            }
            if(tsum>tmax) tmax=tsum;
        }
        printf("Data Set %d:\n%.02lf\n", i+1, tmax);
    }
}