#include <stdio.h>
int main() {
    int n, t, tt, ttt;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d %d %d", &t, &tt, &ttt);
        printf("%d\n", t*(ttt-1)+tt);
    }
}