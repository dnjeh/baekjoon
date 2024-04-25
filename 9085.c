#include <stdio.h>

int main() {
    int T, t, n, sum;
    scanf("%d", &T);
    for(int i=0;i<T;i++) {
        scanf("%d", &n);
        sum=0;
        for(int j=0;j<n;j++) {
            scanf("%d", &t);
            sum+=t;
        }
        printf("%d\n", sum);
    }
    return 0;
}
