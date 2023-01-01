#include <stdio.h>
#include <math.h>
int r(int _t) {
    int _i, _r=_t, _ret=0;
    for(_i=0;_r;_i++, _r/=10);
    for(_i--;_i>=0;_i--, _t/=10) {
        _ret+=((int)pow(10, _i)*(_t%10));
    }
    return _ret;
}
int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d", r((r(x)+r(y))));
}