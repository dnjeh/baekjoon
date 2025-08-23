#include <stdio.h>
double fun(int t, int tt) {
    return tt/(double)t;
}
int main() {
    int n, t, tt, ttt, tttt;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d %d %d %d", &t, &tt, &ttt, &tttt);
        if(fun(t, tt)>fun((int)(ttt*ttt*3.141592), tt)) printf("Whole pizza\n");
        else printf("Slice of pizza\n");
    }
}