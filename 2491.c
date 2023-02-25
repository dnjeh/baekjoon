#include <stdio.h>
int main() {
    int n, i, tsum[2]={0, }, max[2]={0, };
    scanf("%d", &n);
    int a[n];
    for(i=0, tsum[0]=tsum[1]=1;i<n;i++) {
        scanf("%d", &a[i]);
        if(i&&a[i-1]<=a[i]) tsum[0]++;
        else {
            if(max[0]<tsum[0]) max[0]=tsum[0];
            tsum[0]=1;
        }
        if(i&&a[i-1]>=a[i]) tsum[1]++;
        else {
            if(max[1]<tsum[1]) max[1]=tsum[1];
            tsum[1]=1;
        }
    }
    if(max[0]<tsum[0]) max[0]=tsum[0];
    if(max[1]<tsum[1]) max[1]=tsum[1];
    printf("%d", max[0]>max[1]?max[0]:max[1]);
}