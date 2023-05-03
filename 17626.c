#include <stdio.h>
int main() {
    int n, i, j, k, l, a[230];
    for(i=1;i*i<=50000;i++) {
        a[i-1]=i*i;
    }
    scanf("%d", &n);
    for(i=0;i<3;i++) {
        for(j=0;j<223;j++) {
            if(i>0) for(k=j;k<223;k++) {
                if(i>1) for(l=k;l<223;l++) {
                    if(a[j]+a[k]+a[l]==n) {
                        printf("3");
                        return 0;
                    }
                }
                else if(a[j]+a[k]==n){
                    printf("2");
                    return 0;
                }
            }
            else if(a[j]==n) {
                printf("1");
                return 0;
            }
        }
    }
    printf("4");
}