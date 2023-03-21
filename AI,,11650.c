#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int n, i, t;
    scanf("%d", &n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d %d", &t, &a[i]);
        a[i]+=(100000+(t+100000)*1000000);
    }
    qsort(a, n, sizeof(int), compare);
    for(i=0;i<n;i++) {
        printf("%d %d\n", (a[i]/1000000-100000), (a[i]%1000000-100000));
    }
}