#include <stdio.h>
int main() {
    int tsum=0, n, i, t=1;
    scanf("%d", &n);
    for(;n;tsum++) {
        if(n>=t) {
            n-=t++;
        }
        else {
            t=2;
            n--;
        }
    }
    printf("%d", tsum);
}