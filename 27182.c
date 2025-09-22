#include <stdio.h>
int main() {
    int a, b; //오늘이 a
    scanf("%d %d", &a, &b);
    if(b+14==a||a-7<=0) printf("%d", b+7);
    else printf("%d", a-7);
}