#include <stdio.h>
int main() {
    int n, sum=1, cnt=0;
    scanf("%d", &n);
    for(int l=1, r=1;l<=r&&r<=n;) {
        if(sum==n) cnt++;
        if(sum>=n) sum-=l++;
        else sum+=++r;
    }
    printf("%d", cnt);
}
