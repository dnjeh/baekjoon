#include <stdio.h>
int main() {
    int i, n, cnt=0, t;
    scanf("%d", &n);
    for(;n;)
        for(i=223;i>=1&&n;i--) {
            if(n>=i*i) {
                cnt++;
                n-=i*i;
            }
        }
    }
    printf("%d", cnt);
}