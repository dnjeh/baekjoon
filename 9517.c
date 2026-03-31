#include <stdio.h>
int main() {
    char tt;
    int k, n, t, tim=210;
    scanf("%d %d", &k, &n);
    k=(k-1+8)%8;
    for(int i=0;i<n;i++) {
        scanf("%d %c", &t, &tt);
        tim-=t;
        if(tim<=0) {
            printf("%d", k+1);
            return 0;
        }
        if(tt=='T') {
            k=(k+1)%8;
        }
    }
    printf("%d", k+1);
}