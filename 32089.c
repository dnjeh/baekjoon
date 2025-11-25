#include <stdio.h>
int main() {
    int n, max=0, a[1001]={0, };
    for(scanf("%d", &n);n;scanf("%d", &n), max=0) {
        for(int i=0, tmax=0;i<n;i++) {
            scanf("%d", &a[i]);
            tmax+=a[i];
            if(i>=3) tmax-=a[i-3];
            if(max<tmax) max=tmax;
        }
        printf("%d\n", max);
    }
}