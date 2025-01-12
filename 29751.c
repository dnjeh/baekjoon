#include <stdio.h>
int main() {
    int w, h;
    scanf("%d %d", &w, &h);
    int t=w*h/2;
    printf("%d.%d", t, t*2!=w*h?5:0);
}