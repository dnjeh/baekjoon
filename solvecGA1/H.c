#include <stdio.h>
int n, m, q, r[500000], c[500000];
int main() {
    int i, j, mod, t, tt;
    scanf("%d %d %d", &n, &m, &q);
    for(i=0;i<q;i++) {
        scanf("%d %d %d", &mod, &t, &tt);
        t--;
        if(mod==1) r[t]+=tt;
        else c[t]+=tt;
    }
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            printf("%d ", r[i]+c[j]);
        }
        printf("\n");
    }
}