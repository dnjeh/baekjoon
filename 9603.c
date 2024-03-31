#include <stdio.h>
int main() {
    int minx, miny, maxx, maxy, tx, ty, n;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d %d", &tx, &ty);
        if(!i||minx>tx) minx=tx;
        if(!i||maxx<tx) maxx=tx;
        if(!i||miny>ty) miny=ty;
        if(!i||maxy<ty) maxy=ty;
    }
    printf("%d", (maxx-minx)*(maxy-miny));
}