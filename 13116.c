#include <stdio.h>

int main() {
    int T, a, b;
    scanf("%d", &T);
    for(int i=0;i<T;i++) {
        scanf("%d %d", &a, &b);
        for(;a!=b;) {
            if(a>b) a/=2;
            else b/=2;
        }
        printf("%d\n", a*10);
    }
    return 0;
}
