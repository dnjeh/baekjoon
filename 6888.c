#include <stdio.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    for(;a<=b;a+=60) {
        printf("All positions change in year %d\n", a);
    }
}