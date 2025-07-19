#include <stdio.h>

int main() {
    int n, k, t, tans;
    scanf("%d %d", &n, &k);
    for(int i=0;i<k;i++) {
        scanf("%d", &t);
        t=t*100/n;
        if(t<=4) tans=1;
        else if(t<=11) tans=2;
        else if(t<=23) tans=3;
        else if(t<=40) tans=4;
        else if(t<=60) tans=5;
        else if(t<=77) tans=6;
        else if(t<=89) tans=7;
        else if(t<=96) tans=8;
        else if(t<=100) tans=9;
        printf("%d ", tans);
    }
    return 0;
}
