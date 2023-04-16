#include <stdio.h>
int main() {
    int n, i, tsum=0;
    for(scanf("%d", &n);n;scanf("%d", &n)) {
        tsum=2;
        for(;n;n/=10) {
            if(n%10==1) tsum+=3;
            else if(!(n%10)) tsum+=5;
            else tsum+=4;
        }
        printf("%d\n", tsum-1);
    }
}