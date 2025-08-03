#include <stdio.h>
int main() {
    int n, a, b, _a=1, _b=1, _t;
    scanf("%d %d %d", &n, &a, &b);
    for(int i=0;i<n;i++) {
        _a+=a; _b+=b;
        if(_b>_a) {
            _t=_a;
            _a=_b;
            _b=_t;
        }
        if(_a==_b) {
            _b--;
        }
    }
    printf("%d %d", _a, _b);
}