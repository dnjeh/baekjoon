#include <stdio.h>
int a[300000]={1, 1, }, b[300000];
int main() {
    int n, i, j;
    for(i=2;i<=500;i++) {
        if(!a[i]) {
            for(j=2;j<300000;j++) {
                if(i*j<300000) a[j*i]=1;
            }
        }
    }
    for(i=0;i<300000;i++) {
        b[i]=!a[i];
        if(i) b[i]+=b[i-1];
    }
    for(scanf("%d", &n);n;scanf("%d", &n)) {
        printf("%d\n", b[n*2]-b[n]);
    }
}