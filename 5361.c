#include <stdio.h>
int main() {
    int t, tt, ttt, tttt, ttttt, n;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d %d %d %d %d", &t, &tt, &ttt, &tttt, &ttttt);
        int _t=t*34+tt*90+ttt*55+tttt*30+ttttt*90;
        printf("$%d.%02d\n", t*350+tt*230+ttt*190+tttt*125+ttttt*180+_t/100, _t%100);
    }
}