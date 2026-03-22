#include <stdio.h>
int main() {
    int T, n, tsum;
    scanf("%d", &T);
    for(int _i=0;_i<T;_i++) {
        tsum=0;
        scanf("%d", &n);
        for(int i=1;i<=n;i++) {
            tsum+=i*(i+1)*(i+2)/2;
        }
        printf("%d\n", tsum);
    }
}