#include <stdio.h>

int main() {
    int n, g, t, now=0;
    scanf("%d %d", &n, &g);
    int a[n];
    for(int i=0;i<n;i++) a[i]=0;
    for(int i=0;i<g;i++) {
        scanf("%d", &t);
        for(;t;now++) {
            if(now>=n) now=0;
            if(a[now]==0) {
                a[now]=t>2?2:t;
                t-=t>2?2:t;
            }
            else if(a[now]==1) {
                a[now]=2;
                t-=1;
            }
        }
    }
    
    for(int i=0;i<n;i++) {
        printf("%d\n", a[i]);
    }
    return 0;
}
