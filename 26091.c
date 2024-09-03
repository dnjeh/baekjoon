#include <stdio.h>
#include <stdlib.h>
int a[100000];
int compare(const void* a, const void* b) {
    return (*(int(*))a)-(*(int(*))b);
}
int main() {
    int n, m, cnt=0;
    scanf("%d %d", &n, &m);
    for(int i=0;i<n;i++) {
        scanf("%d", &a[i]);
    }
    qsort(a, n, sizeof(a[0]), compare);
    for(int sta=0, end=n-1;sta<end;sta++) {
        if(a[sta]+a[end]>=m) {
            cnt++;
            end--;
        }
    }
    printf("%d", cnt);
    return 0;
}
