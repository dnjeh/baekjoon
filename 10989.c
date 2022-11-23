#include <stdio.h>
int main() {
    int a[10001]={0,}, n, i, t, j;
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        scanf("%d", &t);
        a[t]++;
    }
    for(i=0, j=0;j<n;i++) {
        if(a[i]) {
            a[i]--;
            j++;
            printf("%d\n", i);
        }
        if(a[i]) i--;
    }
}