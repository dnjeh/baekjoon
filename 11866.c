#include <stdio.h>
int main() {
    int n, k, i, now=0, t=0;
    scanf("%d %d", &n, &k);
    int a[n];
    for(i=0;i<n;i++) {
        a[i]=i+1;
    }
    printf("<");
    for(;t/k!=n;now++) {
        if(a[now%n]) {
            t++;
        }
        if(t%k==0&&t/k!=1&&a[now%n]) {
            printf(", %d", a[now%n]);
            a[now%n]=0;
        }
        else if(t%k==0&&a[now%n]) {
            printf("%d", a[now%n]);
            a[now%n]=0;
        }
    }
    printf(">");
}