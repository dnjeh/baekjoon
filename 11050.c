#include <stdio.h>
int peck(int _t, int _sum) {
    if(_t) {
        return peck((_t-1), _sum*_t);
    }
    else return _sum;
}   
int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    printf("%d", peck(n, 1)/((peck(k, 1)*peck(n-k, 1))));
}