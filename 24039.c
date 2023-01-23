#include <stdio.h>
int main() {
    int pri[30]={2, }, i, j, n, cnt=0;
    for(i=3;cnt<30;i++) {
        for(j=0;j<=cnt;j++) {
            if(!(i%pri[j])) {
                break;
            }
            if(j==cnt) pri[++cnt]=i;
        }
    }
    scanf("%d", &n);
    for(i=0;i<29;i++) {
        if(pri[i]*pri[i+1]>n) {
            printf("%d", pri[i]*pri[i+1]);
            break;
        }
    }
}