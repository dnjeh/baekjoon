#include <stdio.h>
int main() {
    int n, j;
    scanf("%d", &n);
    for(j=2;n>1;j++) {
        if(!(n%j)) {
            n/=j;
            printf("%d\n", j);
            j=1;
        }       
    }
}