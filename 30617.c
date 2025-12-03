#include <stdio.h>
int main() {
    int T, l, r, ol, or, cnt=0;
    scanf("%d", &T);
    for(int i=0;i<T;i++) {
        scanf("%d %d", &l, &r);
        if(l&&l==r) cnt++;
        if(i&&l&&l==ol) cnt++;
        if(i&&r&&r==or) cnt++;
        ol=l; or=r;
    }
    printf("%d", cnt);
}