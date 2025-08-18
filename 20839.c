#include <stdio.h>

int main() {
    int a, c, e, da, dc, de;
    scanf("%d %d %d %d %d %d", &a, &c, &e, &da, &dc, &de);
    if(a==da&&c==dc&&e==de) printf("A");
    else if(da>=(a+1)/2&&c==dc&&e==de) printf("B");
    else if(c==dc&&e==de) printf("C");
    else if(dc>=(c+1)/2&&e==de) printf("D");
    else printf("E");
}
