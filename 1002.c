#include <stdio.h>
int d2(int x1, int y1, int x2, int y2) {
    return (x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
}
int main() {
    int T, i, x1, x2, y1, y2, r1, r2, d;
    scanf("%d", &T);
    for(i=0;i<T;i++) {
        scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
        d=d2(x1, y1, x2, y2);
        if(x1==x2&&y1==y2&&r1==r2) printf("-1\n");
        else if(d<(r2+r1)*(r2+r1)&&d>(r2-r1)*(r2-r1)) printf("2\n");
        else if(d==(r2+r1)*(r2+r1)||d==(r2-r1)*(r2-r1)) printf("1\n");
        else printf("0\n");
    }
}