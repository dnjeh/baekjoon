#include <stdio.h>
int main() {
    int i, j;
    for(i=0;i<50;i++) {
        for(j=0;j<50;j++) {
            printf(rand()%2?"W":"B");
        }
        printf("\n");
    }
}