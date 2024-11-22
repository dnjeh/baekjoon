#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    const int *at=(const int *)a;
    const int *bt=(const int *)b;
    if(at[1]>bt[1]) return -1;
    if(at[1]<bt[1]) return 1;
    if(at[2]>bt[2]) return -1;
    if(at[2]<bt[2]) return 1;
    if(at[3]>bt[3]) return -1;
    if(at[3]<bt[3]) return 1;
    return 0;
}

int notEqual(int *a, int *b) {
    return a[1]!=b[1]||a[2]!=b[2]||a[3]!=b[3];
}

int main() {
    int a[1000][4];
    int n, k;
    scanf("%d %d", &n, &k);
    for(int i=0;i<n;i++) {
        for(int j=0;j<4;j++) {
            scanf("%d", &a[i][j]);
        }
    }
    qsort(a, n, sizeof(a[0]), compare);
    int cnt=1;
    for(int i=0;i<n;i++) {
        if(i&&notEqual(a[i-1], a[i])) cnt=i+1;
        if(a[i][0]==k) break;
    }
    printf("%d", cnt);
    return 0;
}
