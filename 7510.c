#include <stdio.h>
int main() {
    int n, t, tt, ttt;
    scanf("%d",  &n);
    for(int i=0;i<n;i++) {
        scanf("%d %d %d", &t, &tt, &ttt);
        printf("Scenario #%d:\n%s", i+1, (
            t*t+tt*tt==ttt*ttt||
            tt*tt+t*t==ttt*ttt||
            t*t+ttt*ttt==tt*tt||
            ttt*ttt+t*t==tt*tt||
            tt*tt+ttt*ttt==t*t||
            ttt*ttt+tt*tt==t*t
        )?"yes":"no");
        if(i+1<n) printf("\n\n");
    }
}