#include <stdio.h>
int main() {
    int n, k, p, t, tsum=0, ans=0;
    scanf("%d %d %d", &n, &k, &p);
    for(int i=0;i<n*k;i++) {
        scanf("%d", &t);
        tsum+=t;
        if(!((i+1)%k)) {
            if(k-tsum<p) ans++;
            tsum=0; 
        }
    }
    printf("%d", ans);
}