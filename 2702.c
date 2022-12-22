#include <stdio.h>
int maxi(int t1, int t2) {
    int _t, _i;
    if(t1<t2) {
        _t=t1;
        t1=t2;
        t2=_t;
    }
    for(_i=t2;_i>=1;_i--) {
        if(!(t1%_i)&&!(t2%_i)) {
            return _i;
        }
    }
}
int main() {
    int T, a, b, i, t;
    scanf("%d", &T);
    for(i=0;i<T;i++) {
        scanf("%d %d", &a, &b);
        t=maxi(a, b);
        printf("%d %d\n", a*b/t, t);
    }
}