#include <stdio.h>
int main() {
    int x, y, a=1;
    scanf("%d %d", &x, &y);
    if(y<0) a+=2;
    if(x*y<0) a+=1;
    printf("%d",a);
}