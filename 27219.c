#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for(;n;) {
        if(n>=5) {
            printf("V");
            n-=5;
        }
        else {
            printf("I");
            n--;
        }
    }
}