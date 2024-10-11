#include <stdio.h>
int main() {
    int T, k, n, t, cnt=0, mem;
    scanf("%d", &T);
    for(int i=0;i<T;i++) {
        cnt=mem=0;
        scanf("%d %d", &n, &k);
        for(int i=0;i<n;i++) {
            scanf("%d", &t);
            if(t==k) mem=k;
            else if(mem-1==t) {
                mem=t;
                if(mem==1) cnt++;
            }
            else mem=0;
        }
        printf("Case #%d: %d\n", i+1, cnt);
    }
}
