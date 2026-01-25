#include <stdio.h>

int main() {
    int n, sum;
    for(scanf("%d", &n);n;scanf("%d", &n)) {
        sum=0;
        for(int i=1;i<=n;i++) for(int j=1;j<=n;j++) {
            sum+=i*j;
        }
        printf("%d\n", sum);
    }
}