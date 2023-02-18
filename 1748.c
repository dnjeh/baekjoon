#include <stdio.h>
int main() {
    int i, n, cnt=0, a[9]={0, 9, 99, 999, 9999, 99999, 999999, 9999999, 99999999}, sum=0;
    scanf("%d", &n);
    for(i=n;i;i/=10, cnt++);
    for(cnt--;cnt>=0;n=a[cnt--]) {
        sum+=(n-a[cnt])*(cnt+1);
    }
    printf("%d", sum);
}