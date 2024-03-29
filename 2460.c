#include <stdio.h>

int main() {
    int t=0, tt, ttt, max=0;
    for(int i=0;i<10;i++) {
        scanf("%d %d", &tt, &ttt);
        t-=tt;
        t+=ttt;
        if(max<t) max=t;
    }
    printf("%d", max);
}
