#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int n, i;
    srand(time(NULL));
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        switch(rand()%4) {
        case 1:
            printf("G");
            break;
        case 2:
            printf("C");
            break;
        case 3:
            printf("T");
            break;
        default:
            printf("A");
            break;
        }
    }
}