#include <stdio.h>
int main() {
    int n, m, l, sum=0, t;
    scanf("%d %d %d", &n, &m, &l);
    for(int i=0;i<n;i++) {
        scanf("%d", &t);
        sum+=t;
    }
    if(sum==m) printf("0");
    else if(sum>m||(sum<l&&sum+l>m)) printf("-1");
    else printf("1");
}