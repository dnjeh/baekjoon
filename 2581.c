#include <stdio.h>
#include <math.h>
int a[10001];
int main() {
    int i, j, n, m, min=-1, sum=0;
    for(i=2;i<=10000;i++) a[i]=i;
    for(i=2;i<=100;i++) {
        if(a[i]) {
            for(j=2;(j*i)<=10000;j++) {
                a[j*i]=0;
            }
        }
    }
    scanf("%d %d", &n, &m);
    for(i=n;i<=m;i++) if(a[i]) {
        if(min==-1) min=i;
        sum+=i;
    }
    if(!sum) printf("-1");
    else printf("%d\n%d\n", sum, min);
}