#include <stdio.h>
int main() {
    int i, sum=0, t;
    for(i=0;i<5;i++) {
        scanf("%d", &t);
        sum+=t<40?40:t;
    }
    printf("%d", sum/5);
}