#include <stdio.h>
int main() {;
    int T, n, k, t, cnt=0;
    scanf("%d", &T);
    for(int _k=0;_k<T;_k++) {
        cnt=0;
        scanf("%d %d", &n, &k);
        for(int i=0;i<n;i++) {
            scanf("%d", &t);
            cnt+=t/k;
        }
        printf("%d\n", cnt);
    }
}