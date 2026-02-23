#include <stdio.h>
int main() {
    int n, a[51]={0, }, t, f=0;
    scanf("%d", &n);
    for(int i=0;i<n*10;i++) {
        for(int j=0;j<5;j++) {
            scanf("%d", &t);
            a[t]++;
        }
    }
    for(int i=1;i<=50;i++) {
        if(a[i]>2*n) {
            f=1;
            printf("%d ", i);
        }
    }
    if(!f) printf("-1");
}