#include <stdio.h>
int main() {
    int i, j, t1[3], t2[3], T1, T2, tsum=0;
    for(i=0;i<3;i++) {
        tsum=0;

        scanf("%d:%d:%d %d:%d:%d", &t1[0], &t1[1], &t1[2], &t2[0], &t2[1], &t2[2]);
        T1=t1[0]*10000+t1[1]*100+t1[2];
        T2=t2[0]*10000+t2[1]*100+t2[2];
        if(T2>T1) {
            for(j=T1;j<=T2;j++) {
                if(j%100>=60||j/100%100>=60) {
                    continue;
                }
                if(j%3==0) {
                    tsum++;
                }
            }
        }
        else {
            for(j=T1;j<=235959;j++) {
                if(j%100>=60||j/100%100>=60) {
                    continue;
                }
                if(j%3==0) {
                    tsum++;
                }
            }
            for(j=0;j<=T2;j++) {
                if(j%100>=60||j/100%100>=60) {
                    continue;
                }
                if(j%3==0) {
                    tsum++;
                }
            }
        }
        printf("%d\n", tsum);
    }
}