#include <stdio.h>
int main() {
    int t, tt, ttt;
    for(scanf("%d %d %d", &t, &tt, &ttt);t||tt||ttt;scanf("%d %d %d", &t, &tt, &ttt)) {
        if((tt<0?ttt<=t:ttt>=t)&&!((ttt-t)%tt)) printf("%d\n", (ttt-t)/tt+1);
        else printf("X\n");
    }
}