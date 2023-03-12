#include <stdio.h>
int main() {
    int n, M, i, d, deg=0, x=0, y=0, f=0;
    char a[5];
    scanf("%d %d", &M, &n);
    for(i=0;i<n;i++) {
        scanf("%s %d", a, &d);
        if(a[0]=='M') {
            switch(deg) {
            case 0: x+=d; break;
            case 1: y-=d; break;
            case 2: x-=d; break;
            case 3: y+=d; break;
            default: break;
            }
            if(x>M||y>M||x<0||y<0) f=1;
        }
        else {
            if(d) {
                deg++;
            }
            else {
                deg--;
            }
            deg=(deg+4)%4;
        }
    }
    if(f) printf("-1");
    else printf("%d %d", x, y);
}