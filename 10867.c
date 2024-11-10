#include <stdio.h>
int main() {
    int a[2501]={0, };
    int n, t;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d", &t);
        a[t+1500]=1;
    }
    for(int i=0;i<=2500;i++) {
        if(a[i]) printf("%d ", i-1500);
    }
}