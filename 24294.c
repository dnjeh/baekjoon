#include <stdio.h>
int main() {
    int w1, h1, w2, h2;
    scanf("%d %d %d %d", &w1, &h1, &w2, &h2);
    printf("%d", (h1+h2)*2+(w1>w2?w1:w2)*2+4);
}