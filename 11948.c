#include <stdio.h>
int main() {
    int asum=0, bsum=0;
    int amin=101, bmin=101;
    int t;
    for(int i=0;i<6;i++) {
        scanf("%d", &t);
        if(i<4) {
            asum+=t;
            if(amin>t) amin=t;
        }
        else {
            bsum+=t;
            if(bmin>t) bmin=t;
        }
    }
    printf("%d", asum+bsum-amin-bmin);
}