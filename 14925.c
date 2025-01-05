#include <stdio.h>
int a[1000][1000];
int min(int a, int b) {
    return a<b?a:b;
}
int main() {
    int m, n, max=0, t;
    scanf("%d %d", &m, &n);
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            scanf("%d", &a[i][j]);
            a[i][j]=!a[i][j];
        }
    }
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            if(i&&j&&a[i][j]) a[i][j]=min(a[i-1][j], min(a[i][j-1], a[i-1][j-1]))+1;
            if(max<a[i][j]) max=a[i][j];
        }
    }
    //for(int i=0;i<m;i++) {
    //    for(int j=0;j<n;j++) {
    //        printf("%d ", a[i][j]);
    //    }
    //    printf("\n");
    //}
    printf("%d", max);
}