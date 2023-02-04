#include <stdio.h>
int main() {
    int n, m, i, j, tmax, max[2]={0, 0}, cnt;
    scanf("%d %d", &n, &m);
    int a[m];
    for(i=0;i<m;i++) scanf("%d", &a[i]);
    for(i=0;i<m;i++) {
        for(j=0, tmax=0, cnt=0;j<m&&cnt<n;j++) {
            if(a[i]<=a[j]) {
                cnt++;
                tmax+=a[i];
            }
        }
        if(!i||(tmax>*max||(tmax==*max&&a[i]<max[1]))) {
            *max=tmax;
            max[1]=a[i];
        }
    }
    printf("%d %d", max[1], *max);
}