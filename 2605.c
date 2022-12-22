#include <stdio.h>
int main() {
    int i, cnt=1, t, n, j, pos;
    scanf("%d", &n);
    int a[n];
    for(i=0;i<n;i++, cnt++) {
        scanf("%d", &t);
        for(j=i;j>=i-t;j--) {
            if(j+1<=n) {
                a[j+1]=a[j];
            }
            if(j==i-t) {
                a[j]=cnt;
            }
        }
    }
    for(i=0;i<n;i++) {
        printf("%d ", a[i]);
    }
}