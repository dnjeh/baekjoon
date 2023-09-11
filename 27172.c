#include <stdio.h>
int a[100000], b[1000001], c[1000001];
int n;
int main() {
    int i, j;
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        scanf("%d", &a[i]);
        b[a[i]]=1;
    }
    for(i=1;i<=500000;i++) {
        if(b[i]) for(j=2;i*j<=1000000;j++) {
            if(b[i*j]) {
                c[i*j]--;
                c[i]++;
            }
        }
    }
    for(i=0;i<n;i++) {
        printf("%d ", c[a[i]]);
    }
}