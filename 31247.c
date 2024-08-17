#include <stdio.h>
#include <math.h>
int main() {
    int T;
    long long int n, k;
    scanf("%d", &T);
    for(int i=0;i<T;i++) {
        scanf("%lld %lld", &n, &k);
        if(k>62) printf("0\n");
        else printf("%lld\n", (long long int)((n+(long long int)powl(2, k))/((long long int)powl(2, k+1))));
    }
}