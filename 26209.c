#include <stdio.h>
int main() {
    int t;
    for(int i=0;i<8;i++) {
        scanf("%d", &t);
        if(t==9) {
            printf("F");
            return 0;
        }
    }
    printf("S");
}