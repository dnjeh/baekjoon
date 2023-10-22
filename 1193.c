#include <stdio.h>
int main() {
    int x, i;
    scanf("%d", &x);
    for(i=1;x-i>0;i++) {
        x-=i;
    } i++;
    if(i%2) printf("%d/%d", x, i-x);
    else printf("%d/%d", i-x, x);
}