#include <stdio.h>
int main() {
    int T, i, j, d;
    for(scanf("%d", &T), j=1;T!=0;scanf("%d", &T), j++) {
        for(i=0;i<T;i++) { scanf("%d", &d); }
        printf("Case %d: Sorting... done!\n", j);
    }
}