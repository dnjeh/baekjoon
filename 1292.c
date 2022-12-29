#include <stdio.h>
int main() {
    int cnt=1, i, j, n, m;
    long long int sum=0;
    scanf("%d %d", &n, &m);
    for(i=1;cnt<=m;i++) {
        for(j=0;j<i&&cnt<=m;j++) {
            if(cnt++>=n) sum+=i;
        }
    }
    printf("%lld", sum);
}