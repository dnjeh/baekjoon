#include <stdio.h>
int main() {
    int minx, miny, n, t, tt;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d %d", &t, &tt);
        if(!i||miny>tt) {
            minx=t;
            miny=tt;
        }
    }
    printf("%d %d", minx, miny);
}