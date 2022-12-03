#include <stdio.h>
int main() {
    int i, sum=0;
    char t;
    for(i=0;i<71;i++) {
        scanf("%c", &t);
        if((!(i%2))&&t=='F') {
            sum++;
        }
    }
    printf("%d", sum);
}