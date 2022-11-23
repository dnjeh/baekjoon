#include <stdio.h>
int main() {
    int n, t, i, tsum=0;
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        tsum=t=i;
        for(;t;t/=10) { tsum+=t%10; }
        if(tsum==n) {
            printf("%d", i);
            return 0;
        }
    }
    printf("0");
}