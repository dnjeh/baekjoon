#include <stdio.h>
int main() {
    int n, x, t, tt, min;
    scanf("%d %d", &n, &x);
    for(int i=0;i<n;i++) {
        scanf("%d", &tt);
        if(i&&min>t+tt) min=t+tt;
        t=tt;
    }
    printf("%d", min*x);
}