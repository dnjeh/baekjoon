#include <stdio.h>
int main() {
    int n;
    for(scanf("%d", &n);n;scanf("%d", &n)) {
        int tsum=1, t;
        for(int i=0;i<n;i++) {
            scanf("%d", &t);
            tsum*=t;
            scanf("%d", &t);
            tsum-=t;
        }
        printf("%d\n", tsum);
    }
}