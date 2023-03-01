#include <stdio.h>
int main() {
    int n, i, cnt=0;
    scanf("%d", &n);
    int a[n];
    for(i=0;i<n;i++) scanf("%d", &a[i]);
    for(i=n-1;i;i--) {
        if(a[i-1]>=a[i]) {
            cnt+=(a[i-1]-a[i]+1);
            a[i-1]=a[i]-1;
        }
    }
    printf("%d", cnt);
}