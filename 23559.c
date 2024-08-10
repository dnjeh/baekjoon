#include <stdio.h>
#include <stdlib.h>
int a[100000][2], b[100000][2];
int compare(const void* a, const void* b) {
    return ((*(int(*)[2])b)[0]-(*(int(*)[2])a)[0]);
}
int main() {
    int n, x, sum=0;
    scanf("%d %d", &n, &x);
    for(int i=0;i<n;i++) {
        for(int j=0;j<2;j++) {
            scanf("%d", &a[i][j]);
        }
        b[i][0]=a[i][0]-a[i][1];
        b[i][1]=i;
    }
    qsort(b, n, sizeof(b[0]), compare);
    for(int i=0;i<n;i++) {
        if(b[i][0]>0&&x>=5000+1000*(n-i-1)) {
            x-=5000;
            sum+=a[b[i][1]][0];
        }
        else {
            x-=1000;
            sum+=a[b[i][1]][1];
        }
    }
    printf("%d", sum);
}