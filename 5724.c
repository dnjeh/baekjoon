#include <stdio.h>

int main() {
    int t;
    for(scanf("%d", &t);t;scanf("%d", &t)) {
        printf("%d\n", t*(t+1)*(2*t+1)/6);
    }
    return 0;
}
