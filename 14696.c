#include <stdio.h>
int main() {
    int T, n, t, a[2][4], j;
    scanf("%d", &T);
    for(int i=0;i<T;i++) {
            for(int k=0;k<8;k++) {
                a[k/4][k%4]=0;
            }
        for(j=0;j<2;j++) {
            scanf("%d", &n);
            for(int k=0;k<n;k++) {
                scanf("%d", &t);
                a[j][t-1]++;
            }
        }
        for(j=3;j>=0;j--) {
            if(a[0][j]>a[1][j]) {
                printf("A\n");
                break;
            }
            else if(a[0][j]<a[1][j]) {
                printf("B\n");
                break;
            }
        }
        if(j==-1) printf("D\n");
    }
}