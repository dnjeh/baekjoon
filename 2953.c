#include <stdio.h>
int main() {
    int imax=0, max=0, t, tsum;
    for(int i=0;i<5;i++) {
        tsum=0;
        for(int j=0;j<4;j++) {
            scanf("%d", &t);
            tsum+=t;
        }
        if(!i||max<tsum) {
            max=tsum;
            imax=i+1;
        }
    }
    printf("%d %d", imax, max);
}