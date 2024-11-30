#include <stdio.h>
int a[2000100];
int main() {
    int n, t;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d", &t);
        a[t+1000000]=1;
    }
    for(int i=2000000;i>=0;i--) {
        if(a[i]) printf("%d\n", i-1000000);
    }
}