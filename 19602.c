#include <stdio.h>
int main() {
    int s, m, l;
    scanf("%d %d %d", &s, &m, &l);
    s+=m*2+l*3;
    printf("%s", s>=10?"happy":"sad");
}