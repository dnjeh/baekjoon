#include <stdio.h>
int main() {
    int n, m;
    scanf("%d", &n);
    m=n/100*(n>=1000000?20:(n>=500000?15:(n>=100000?10:5)));
    printf("%d %d", m, n-m);
}