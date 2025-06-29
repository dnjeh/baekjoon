#include <stdio.h>

int main() {
    int n, m, sum=0, a[10], t;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &m);
    for(int i=0;i<m;i++) {
        scanf("%d", &t);
        sum+=a[t-1];
    }
    printf("%d", sum);
    return 0;
}
