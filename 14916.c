#include <stdio.h>

int main() {
    int n, cnt=0;
    scanf("%d", &n);
    cnt=n/5;
    n%=5;
    for(;n%2&&cnt;n+=5, cnt--) {}
    if(!cnt&&n%2) printf("-1");
    else printf("%d", cnt+n/2);
    return 0;
}
