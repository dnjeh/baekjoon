#include <stdio.h>
int a[2000001];
int main() {
    int n, i, t;
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        scanf("%d", &t);
        a[t+1000000]++;
    }
    for(i=0;i<2000001;i++) {
        if(a[i]--) {
            printf("%d\n", i-1000000);
            i--;
        }
    }
}