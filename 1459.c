#include <stdio.h>
int main() {
    long long int x, y, n, m, i, cnt=0;                    //n은 한 블럭 이동시 시간, m은 대각선 이동시 시간
    scanf("%lld %lld %lld %lld", &x, &y, &n, &m);
    if(x<y) {
        i=x;
        x=y;
        y=i;
    }
    if(n*2>m) {
        cnt+=y*m;
        x-=y;
        y=0;
        if(n<m) {
            printf("%lld", cnt+x*n);
        }
        else if(x%2) {
            printf("%lld", cnt+(x-1)*m+n);
        }
        else {
            printf("%lld", cnt+x*m);
        }
    }
    else {
        printf("%lld", (x+y)*n);
    }
}