#include <stdio.h>
int main() {
    int n, k, ans;
    scanf("%d %d", &n, &k);
    k+=60;
    if(n-k>0) {
        ans=(n-k)*3000+k*1500;
    }
    else ans=n*1500;
    printf("%d", ans);
}