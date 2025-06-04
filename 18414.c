#include <stdio.h>
int abs(int t) {
    return t<0?t*-1:t;
}
int main() {
    int x, l, r, a;
    scanf("%d %d %d", &x, &l, &r);
    for(int i=l;i<=r;i++) {
        if(i==l||abs(x-i)<abs(x-a)) {
            a=i;
        }
    }
    printf("%d", a);
}