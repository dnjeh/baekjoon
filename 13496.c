#include <stdio.h>
int main() {
    int T, n, s, d, t, tt, tsum;
    scanf("%d", &T);
    for(int i=0;i<T;i++) {
        if(i) printf("\n");
        scanf("%d %d %d", &n, &s, &d);
        tsum=0;
        for(int j=0;j<n;j++) {
            scanf("%d %d", &t, &tt);
            if(t/s+(t%s?1:0)<=d) tsum+=tt;
        }
        printf("Data Set %d:\n%d\n", i+1, tsum);
    }
}