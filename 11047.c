#include <stdio.h>

int main() {
    int n, k, i, cnt=0;
    scanf("%d %d", &n, &k);
    int a[n];
    for(i=0;i<n;i++) scanf("%d", &a[i]);
    for(i=n-1;k&&i>=0;i--) {
        if(k>=a[i]) {
            k-=a[i];
            cnt++;
            i++;
        }
    }
    printf("%d", cnt);
}