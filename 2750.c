#include <stdio.h>
int a[2002];
int main() {
    int i, n, t;
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        scanf("%d", &t);
        a[t+1000]=1;
    }
    for(i=0;i<2001;i++) {
        if(a[i]) {
            printf("%d\n", i-1000);
        }
    }
}