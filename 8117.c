#include <stdio.h>
#include <stdlib.h>
int a[200200];
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}
int main() {
    int n;
    for(n=0, scanf("%d", &a[n]);a[n];n++, scanf("%d", &a[n])) {};
    qsort(a, n, sizeof(int), compare);
    for(int i=0;i<n-2;i++) {
        if(a[i]+a[i+1]>a[i+2]) {
            printf("%d %d %d", a[i], a[i+1], a[i+2]);
            return 0;
        }
    }
    printf("NIE");
}