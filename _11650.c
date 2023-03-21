#include <stdio.h>
int main() {
    int n, i, t;
    scanf("%d", &n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d %d", &t, &a[i]);
        a[i]+=(100000+(t+100000)*1000000);
    }
}