#include <stdio.h>
#include <stdlib.h>
int a[200000], b[200000], aind, bind;
int compare(const int* a, const int* b) {
    return (*a-*b);
}
int main() {
    long long int sum=0;
    int n, k, t;
    scanf("%d %d", &n, &k);
    for(int i=0;i<n;i++) {
        scanf("%d", &t);
        if(t>=0) a[aind++]=t;
        else b[bind++]=t*-1;
    }
    qsort(a, aind, sizeof(int), compare);
    qsort(b, bind, sizeof(int), compare);
    for(int i=aind-1;i>=0;i-=k) {
        sum+=(long long int)a[i]*2;
    }
    for(int i=bind-1;i>=0;i-=k) {
        sum+=(long long int)b[i]*2;
    }
    printf("%lld", sum);
}