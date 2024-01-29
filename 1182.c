#include <stdio.h>
#define INF 2100000000
int bak(int *a, int n, int s, int t, int sum) {
    int ret=0;
    if(t>=n&&s==sum) ret=1;
    else if(t<n) {
        ret+=bak(a, n, s, t+1, sum);
        ret+=bak(a, n, s, t+1, sum==INF?a[t]:sum+a[t]);
    }
    return ret;
}
int main() {
    int a[20];
    int n, s, cnt;
    scanf("%d %d", &n, &s);
    for(int i=0;i<n;i++) {
        scanf("%d", &a[i]);
    }
    printf("%d", bak(a, n, s, 0, INF));
}