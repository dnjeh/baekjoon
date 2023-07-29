#include <stdio.h>
int main() {
    int i, y=0, t;
    for(i=0;i<4;i++) {
        scanf("%d", &t);
        y+=t;
    }
    printf("%d\n%d", y/60, y%60);
}