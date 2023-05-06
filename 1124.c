#include <stdio.h>
#include <math.h>
int a[2][100001];
int main() {
    int i, j, n, m, cnt=0;
    for(i=2;i<=100000;i++) a[0][i]=i;
    for(i=2;i<=320;i++) {
        if(a[0][i]==i) {
            for(j=1;(j*i)<=100000;j++) {
                a[1][j*i]++;
                a[0][j*i]/=i;
                if(!(a[0][j*i]%i)) j--;
            }
        }
    }
    for(i=321;i<=100000;i++) {
        if(a[0][i]!=1) {
            a[1][i]++;
            a[0][i]=1;
        }
    }
    scanf("%d %d", &n, &m);
    for(i=n;i<=m;i++) if(a[1][a[1][i]]==1) cnt++;
    printf("%d", cnt);
}