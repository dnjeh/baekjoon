#include <stdio.h>
#include <math.h>
int main() {
    int w, h;
    scanf("%d %d", &w, &h);
    printf("%.9g", w+h-sqrt(w*w+h*h));
}