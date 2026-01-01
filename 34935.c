#include <stdio.h>
int main() {
    long long int n, pt, t;
    scanf("%lld", &n);
    for(int i=0;i<n;i++) {
        scanf("%lld", &t);
        if(i&&pt>=t) {
            printf("0");
            return 0;
        }
        pt=t;
    }
    printf("1");
}