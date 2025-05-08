#include <stdio.h>
int fun(int d, int h, int m) {
    return d*24*60+h*60+m;
}
int main() {
    int t, tt, ttt;
    scanf("%d %d %d", &t, &tt, &ttt);
    t=fun(t, tt, ttt)-fun(11, 11, 11);
    printf("%d", t<0?-1:t);
}