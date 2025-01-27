#include <stdio.h>
#include <stdlib.h>
int a[100000][2];
int compare(const void *a, const void *b) {
    int _a=(*(int(*)[2])a)[0]+(*(int(*)[2])a)[1];
    int _b=(*(int(*)[2])b)[0]+(*(int(*)[2])b)[1];
    return (_b-_a);
}
int main() {
    int n, sum=0;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        for(int j=0;j<2;j++) {
            scanf("%d", &a[i][j]);
        }
    }
    qsort(a, n, sizeof(a[0]), compare);
    for(int i=0;i<n;i++) {
        if(i<n/2) {
            a[i][0]*=-1; a[i][1]*=-1;
        }   
        if(a[i][0]<a[i][1]) sum+=a[i][0];
        else sum+=a[i][1];
    }
    printf("%d", sum);
}