#include <stdio.h>
int a[21], c, b, max;
void bak(int now, int sum) {
    if(now>=b) {
        if(c>=sum&&max<sum) max=sum;
    }
    else {
        sum+=a[now];
        bak(now+1, sum);
        sum-=a[now];
        bak(now+1, sum);
    }
}
int main() {
    scanf("%d %d", &c, &b);
    for(int i=0;i<b;i++) {
        scanf("%d", &a[i]);
    }
    bak(0, 0);
    printf("%d", max);
}