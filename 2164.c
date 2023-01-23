#include <stdio.h>
int main() {
    int n, i, j, cnt=0;
    scanf("%d", &n);
    int a[n+1];
    for(i=1;i<=n;i++) {
        a[i-1]=i;
    }
    a[i-1]=0;
    for(;a[1];) for(i=j=0;a[i];i++) {
        cnt++;
        if(!(cnt%2)) {
            a[j++]=a[i];
        }
        if(!a[i+1]) {
            a[j]=0;
        }
    }
    printf("%d", *a);
}