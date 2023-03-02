#include <stdio.h>
int main() {
    int n, k, i, j, cnt=0;
    scanf("%d %d", &n, &k);
    int a[n+1];
    for(i=0;i<=n;i++) a[i]=1;
    for(i=2;i<=n;) {
        for(i=2;!a[i];i++);
        for(j=i;j<=n;j+=i) {
            if(a[j]) cnt++;
            a[j]=0;
            if(cnt==k) {
                printf("%d", j);
                return 0;
            }
        }
    }
}