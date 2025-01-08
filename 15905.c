#include <stdio.h>
#include <stdlib.h>
int compare(const void *a, const void *b) {
    const int *at=(const int *)a;
    const int *bt=(const int *)b;
    if(at[0]>bt[0]) return -1;
    if(at[0]<bt[0]) return 1;
    if(at[1]<bt[1]) return -1;
    if(at[1]>bt[1]) return 1;
    return 0;
}
int main() {
    int n, ans=0;
    scanf("%d", &n);
    int a[n][2];
    for(int i=0;i<n;i++) {
        for(int j=0;j<2;j++) {
            scanf("%d", &a[i][j]);
        }
    }
    qsort(a, n, sizeof(a[0]), compare);
    for(int i=5;i<n;i++) {
        if(a[4][0]==a[i][0]) ans++;
        else break;
    }   
    printf("%d", ans);
}