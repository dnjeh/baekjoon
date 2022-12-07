#include <stdio.h>
int main() {
    int i, j, n, m, now[2]={0}, sum=0;
    scanf("%d %d", &n, &m);
    int a[n], b[m];
    for(i=0;i<n;i++) {
        scanf("%d", &a[i]);
    }
    for(i=0;i<m;i++) {
        scanf("%d", &b[i]);
    }
    for(now[1]=0;now[1]<m;now[1]++) {
        if(a[now[0]]>=b[now[1]]) {
            a[now[0]]-=b[now[1]];
        }
        else {
            now[0]++;
            now[1]--;
        }
    }
    for(i=0;i<n;i++) {
        sum+=a[i];
    }
    printf("%d", sum);
}