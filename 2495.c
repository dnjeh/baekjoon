#include <stdio.h>
int main() {
    int i, j, a, t[2]={-1, -1}, tmax=0, tsum=0;
    for(i=0;i<3;i++) {
        tsum=0;
        tmax=t[0]=t[1]=-1;
        scanf("%d", &a);
        for(j=0;j<8;j++) {
            t[1]=t[0];
            t[0]=a%10;
            if(t[1]==t[0]) tsum++;
            else tsum=0;
            if(tmax<tsum) tmax=tsum;
            a/=10;
        }
        printf("%d\n", tmax+1);
    }
}