#include <stdio.h>

int main() {
    int T, n, t, tsum;
    double tt, ttsum;
    scanf("%d", &T);
    for(int i=0;i<T;i++) {
        scanf("%d", &n);
        tsum=ttsum=0;
        for(int j=0;j<n;j++) {
            scanf("%d %lf", &t, &tt);
            tsum+=t;
            ttsum+=tt*t;
        }
        printf("%d %.1lf\n", tsum, ttsum/tsum);
    }
    return 0;
}
