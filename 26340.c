#include <stdio.h>
int main() {
    int T, a, b, c, _a, _b, j;
    scanf("%d", &T);
    for(int i=0;i<T;i++) {
        scanf("%d %d %d", &a, &b, &c);
        for(_a=a, _b=b, j=0;j<c;j++) {
            if(_a>_b) _a/=2;
            else _b/=2;
        }
        printf("Data set: %d %d %d\n%d %d\n\n", a, b, c, _a>_b?_a:_b, _a<_b?_a:_b);
    }
}