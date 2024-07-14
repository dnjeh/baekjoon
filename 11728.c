#include <stdio.h>
int a[1000000], b[1000000], n, m, anow, bnow;
int main() {
    scanf("%d %d", &n, &m);
    for(int i=0;i<n;i++) {
        scanf("%d", &a[i]);
    }
    for(int i=0;i<m;i++) {
        scanf("%d", &b[i]);
    }
    for(;anow<n||bnow<m;) {
        int t;
        if(bnow>=m||anow<n&&a[anow]<b[bnow]) t=a[anow++];
        else t=b[bnow++];
        printf("%d ", t);
    }
}