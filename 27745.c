#include <stdio.h>
#include <stdlib.h>
int a[50100], aind, b[50100], bind, c[100000];
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}
int main() {
    int T, n;
    scanf("%d", &T);
    for(int i=0;i<T;i++) {
        aind=bind=0;
        scanf("%d", &n);
        for(int j=0;j<n;j++) {
            scanf("%d", &c[j]);
            if(!(j%2)) a[aind++]=c[j];
            else b[bind++]=c[j];
        }
        qsort(c, n, sizeof(int), compare);
        qsort(a, aind, sizeof(int), compare);
        qsort(b, bind, sizeof(int), compare);
        aind=bind=0;
        int f=0;
        for(int j=0;j<n&&!f;j++) {
            if((!(j%2)&&a[aind++]!=c[j])||(j%2&&b[bind++]!=c[j])) {
                printf("Case #%d: %d\n", i+1, j);
                f=1;
            }
        }
        if(!f) printf("Case #%d: OK\n", i+1);
    }
}