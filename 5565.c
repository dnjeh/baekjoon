#include <stdio.h>

int main() {
    int sum, t;
    scanf("%d", &sum);
    for(int i=0;i<9;i++) {
        scanf("%d", &t);
        sum-=t;
    }
    printf("%d", sum);
    return 0;
}
