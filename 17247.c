#include <stdio.h>
int abs(int t) {
    return t<0?t*-1:t;
}
int main() {
    int n, m, x1, y1, x2, y2;
    int i, j, f=0, t;
    scanf("%d %d", &n, &m);
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            scanf("%d", &t);
            if(t) {
                if(!f) {
                    x1=j;
                    y1=i;
                    f=1;
                }
                else {
                    x2=j;
                    y2=i;
                }
            }
        }
    }
    printf("%d", abs(x2-x1)+abs(y2-y1));
}