#include <stdio.h>
int a[9];
void printm() {
    int i, j, tmin[2];
    for(i=0;i<7;i++) {
        for(j=0;j<9;j++) {
            if(!j||tmin[0]>a[j]) {
                tmin[0]=a[j];
                tmin[1]=j;
            }
        }
        printf("%d\n", tmin[0]);
        a[tmin[1]]=100;
    }
}
int main() {
    int i, j, sum=0;
    for(i=0;i<9;i++) {
        scanf("%d", &a[i]);
        sum+=a[i];
    }
    for(i=0;i<9;i++) {
        for(j=i+1;j<9;j++) {
            if(sum-a[i]-a[j]==100) {
                a[i]=100;
                a[j]=100;
                printm();
                return 0;
            }
        }
    }
}