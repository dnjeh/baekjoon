#include <stdio.h>
void fun(int t, int* tt) {
    *tt=t>*tt?t:*tt;
}
int main() {
    int n, h, v;
    scanf("%d %d %d", &n, &h, &v);
    fun(n-h, &h); fun(n-v, &v);
    printf("%d", h*v*4);
}