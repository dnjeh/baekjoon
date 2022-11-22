#include <stdio.h>
int main() {
    int x, y, w, h, min=1001;
    scanf("%d %d %d %d", &x, &y, &w, &h);
    if(x<min) min=x;
    if(y<min) min=y;
    if(w-x<min) min=w-x;
    if(h-y<min) min=h-y;
    printf("%d", min);
}