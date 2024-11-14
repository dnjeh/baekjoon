#include <stdio.h>
#include <stdlib.h>
int y[100000], x[100000];
int compare(const void *a, const void *b) {
    return (*(int*)b - *(int*)a);
}
int main() {
    int n, k;
    long long int yans=0, xans=0, msum=-1, tsum;
    scanf("%d %d", &n, &k);
    for(int i=0;i<k;i++) {
        scanf("%d %d", &y[i], &x[i]);
    }
    qsort(y, k, sizeof(int), compare);   
    qsort(x, k, sizeof(int), compare);   
    for(int i=0;i<(k%2?5:4);i++) {
        if(i-2<0||i-2>=k) continue; 
        yans=y[k/2+i-2]; xans=x[k/2+i-2]; tsum=0;
        for(int i=0;i<k;i++) {
            tsum+=abs(yans-y[i])+abs(xans-x[i]);
        }
        if(msum==-1||tsum<msum) msum=tsum;
    }
    printf("%lld", msum);
}