#include <stdio.h>
int main() {
    int n, i, max=0, smax=0, fmax=0, imax=0, j;
    scanf("%d", &n);
    int a[n][2];
    for(i=0;i<n*2;i++) {
        scanf("%d", &a[i/2][i%2]);
        if(!(i%2)&&max<a[i/2][i%2]) max=a[i/2][i%2];
    }
    for(i=max;i>0;i--) {
        smax=0;
        for(j=0;j<n;j++) {
            if(a[j][0]>=i&&(i-a[j][1])>0) smax+=(i-a[j][1]); 
        }
        if(fmax<=smax) {
            fmax=smax;
            imax=i;
        }
    }
    printf("%d", fmax?imax:0);
}