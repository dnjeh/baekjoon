#include <stdio.h>
int main() {
    int n, i, t, t1=0;
    scanf("%d", &n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d", &t);
        a[i]=t-t1;
        t1=t;
    }
    if(a[1]==a[2]) {
        printf("%d", t+a[1]);
    }
    else {
        printf("%d", t*(a[2]/a[1]));
    }
}