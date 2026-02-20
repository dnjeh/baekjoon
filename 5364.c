#include <stdio.h>
#include <math.h>
int main() {
    int n, x1, y1, tx, ty, mx, my;
    double min;
    scanf("%d", &n);
    scanf("%d %d", &x1, &y1);
    for(int i=0;i<n-1;i++) {
        scanf("%d %d", &tx, &ty);
        if(!i||min>sqrt((double)((x1-tx)*(x1-tx)+(y1-ty)*(y1-ty)))) {
            min=sqrt((double)((x1-tx)*(x1-tx)+(y1-ty)*(y1-ty)));
            mx=tx;
            my=ty;
        }
    }
    printf("%d %d\n%d %d\n%.02lf", x1, y1, mx, my, min);
}