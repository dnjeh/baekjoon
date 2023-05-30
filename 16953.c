#include <stdio.h>
int main() {
    int a, b, cnt;
    scanf("%d %d", &a, &b);
    for(cnt=0;b>a;cnt++) {
        if(!(b%2)) {
            b/=2;
        }
        else if(b%10==1) {
            b/=10;
        }
        else break;
    }
    if(b==a) printf("%d", cnt);
    else printf("%d", -1);
}