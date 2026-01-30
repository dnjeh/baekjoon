#include <stdio.h>
#include <stdlib.h>
int compare(const void *a, const void *b) {
    int t=*(int*)a - *(int*)b;
    return t>0?1:t<0?-1:0;
}
int main() {
    int a[4];
    for(int i=0;i<4;i++) {
        scanf("%d", &a[i]);
    }
    qsort(a, 4, sizeof(a[0]), compare);
    printf("%d", a[0]*a[2]);
}