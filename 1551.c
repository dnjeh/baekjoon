#include <stdio.h>
int main() {
    int n, k, i, j;
    scanf("%d %d", &n, &k);
    int a[n+1];
    a[n]=-1000;
    for(i=0;i<n-1;i++) {
        scanf("%d,", &a[i]);
    }
    scanf("%d,", &a[i]);
    for(i=0;i<k;i++) {
        for(j=0;a[j]!=-1000;j++) {
            if(a[j+1]==-1000) {
                a[j]=-1000;
            }
            else {
                a[j]=a[j+1]-a[j];
            }
        }
    }
    for(i=0;a[i]!=-1000;i++) {
        printf("%d", a[i]);
        if(a[i+1]!=-1000) printf(",");
    }
}