#include <stdio.h>
int main() {
    int n, m, l, i, now=0, sum=0;
    scanf("%d %d %d", &n, &m, &l);
    int a[n];
    for(i=0;i<n;i++) {
        a[i]=0;
    }
    for(now=0, a[now]++;a[now]<m&&++sum;a[now]++) {
        if(a[now]%2) {
            now+=l;
        }
        else {
            now+=n;
            now-=l;
        }
        now%=n;
    }
    printf("%d", sum);
}