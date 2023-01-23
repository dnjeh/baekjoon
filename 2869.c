#include <stdio.h>
int main() {
    int a, b, v, t;
    scanf("%d %d %d", &a, &b, &v);
    printf("%d", (v-a)%(a-b)?(v-a)/(a-b)+2:(v-a)/(a-b)+1);
}