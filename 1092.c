#include <stdio.h>
#include <stdlib.h>
int a[50], b[10000];
int compare(const void *a, const void *b) {
    return (*(int*)b - *(int*)a);
}
int main() {
    int n, m, cnt, cnt2, f=0;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &m);
    for(int i=0;i<m;i++) {
        scanf("%d", &b[i]);
    }
    qsort(a, n, sizeof(int), compare);
    qsort(b, m, sizeof(int), compare);
    for(cnt=cnt2=0;cnt<m&&!f;cnt2++) {
        f=1;
        for(int i=0, j=0;i<m&&j<n;i++) {
            if(b[i]&&b[i]<=a[j]) {
                b[i]=0;
                cnt++;
                f=0;
                j++;
            }
        }
    }
    printf("%d", cnt<m?-1:cnt2);
}