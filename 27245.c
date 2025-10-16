#include <stdio.h>
int main() {
    int w, h, l;
    scanf("%d %d %d", &w, &l, &h);
    printf("%s", ((w<l?w:l)/h>=2&&(w>l?w:l)/(w<l?w:l)<=2)?"good":"bad");
}