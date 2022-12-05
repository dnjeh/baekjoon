#include <stdio.h>
int main() {
    int a[3]={0}, i, j, k, max[2]={0};
    for(i=0;i<3;i++) { scanf("%d", &a[i]); }
    int b[a[0]+a[1]+a[2]+1];
    for(i=0;i<=(a[0]+a[1]+a[2]);i++) {
        b[i]=0;
    }
    for(i=1;i<=a[0];i++) {
        for(j=1;j<=a[1];j++) {
            for(k=1;k<=a[2];k++) {
                b[i+j+k]++;
            }
        }
    }
    for(i=0;i<=(a[0]+a[1]+a[2]);i++) {
        if(max[1]<b[i]) {
            max[1]=b[i];
            max[0]=i;
        }
    }
    printf("%d", max[0]); 
}