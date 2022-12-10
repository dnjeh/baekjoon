#include <stdio.h>
int main() {
    int n, k, sum=0, l;
    for(;scanf("%d %d", &n, &k)!=EOF;sum=0) {
        for(l=0;n;) {
            sum+=n;
            l+=n;
            n=l/k;
            if(n) l%=n*k;
        }
        printf("%d\n", sum);
    }
}