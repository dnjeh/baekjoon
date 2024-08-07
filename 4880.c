#include <stdio.h>
int main() {
    int t, tt, ttt;
    for(scanf("%d %d %d", &t, &tt, &ttt);t||tt||ttt;scanf("%d %d %d", &t, &tt, &ttt)) {
        if(tt-t==ttt-tt) printf("AP %d\n", ttt+tt-t);
        else printf("GP %d\n", ttt*(tt/t));
    }
}