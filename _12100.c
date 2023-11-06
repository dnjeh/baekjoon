#include <stdio.h>
int a[20][20], b[20][20], c[5], max=0;

void bac(int t) {
    if(t>=5) fun();
    for(i=0;i<4;i++) {
        c[t]=i;
        bac(t+1);
    }
}
int main() {
    int i, j;
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            scanf("%d", &a[i][j]);
            if(max<a[i][j]) max=a[i][j];
        }
    }
    bac(0);
    printf("%d", max);
}
