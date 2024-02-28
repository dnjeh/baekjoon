#include <stdio.h>
int main() {
    int T, a[1001]={0, }, t;
    scanf("%d", &T);
    for(int i=1;i<=T;i++) {
        for(int j=0;j<10;j++) {
            scanf("%d", &t);
            a[t]=i;
        }
        for(int j=1, tcnt=0;j<=1000;j++) {
            if(a[j]==i) {
                tcnt++;
            }
            if(tcnt==8) {
                printf("%d\n", j);
                break;
            }
        }
    }
}