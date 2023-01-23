#include <stdio.h>
int main() {
    int n, i, j, t, cnt=1;
    scanf("%d", &n);
    int a[n], b[n];
    for(i=0;i<n*2;i++) {
        if(!(i%2)) scanf("%d", &t);
        else {
            a[i/2]=t*1000;
            scanf("%d", &t);
            a[i/2]+=t;
        }
    }
    for(i=0;i<n;i++) {
        cnt=1;
        for(j=0;j<n;j++) {
            if(i!=j&&a[j]%1000>a[i]%1000&&a[j]/1000>a[i]/1000) cnt++;
        }
        b[i]=cnt;
    }
    for(i=0;i<n;i++) {
        printf("%d ", b[i]);
    }
}