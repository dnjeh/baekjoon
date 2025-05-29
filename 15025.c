#include <stdio.h>
int main() {
    int l, r;
    scanf("%d %d", &l, &r);
    if(!l&&!r) printf("Not a moose");
    else printf("%s %d", l==r?"Even":"Odd", (l>r?l:r)*2);
}