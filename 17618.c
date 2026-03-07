#include <stdio.h>
int main() {
    int n, ans=0, t;
    scanf("%d", &n);
    for(int i=1;i<=n;i++) {
        t=0;
        for(int j=i;j;j/=10) t+=j%10;
        if(!(i%t)) ans++;
    }
    printf("%d", ans);
}