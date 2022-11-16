#include <stdio.h>
int main() {
    int t, i;
    for(i=0;i<6;i++) {
        scanf("%d", &t);
        if(i==0||i==1) {
            printf("%d ", 1-t);
        }
        else if(i==2||i==3||i==4) {
            printf("%d ", 2-t);
        }
        else {
            printf("%d", 8-t);
        }
    }
}