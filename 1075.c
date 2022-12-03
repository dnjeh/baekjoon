#include <stdio.h>
int main() {
    int a, b, i;
    scanf("%d %d", &a, &b);
    a-=a%100;
    for(i=0;i<99;i++) {
        if(!((a+i)%b)) {
            printf("%02d", i);
            return 0;
        }
    }
}