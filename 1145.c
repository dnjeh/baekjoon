#include <stdio.h>
int main() {
    int a[5], i, t=100, tsum=0;
    for(i=0;i<5;i++) {
        scanf("%d", &a[i]);
        if(t>a[i]) t=a[i];
    }
    for(;;t++, tsum=0) {
        for(i=0;i<5;i++) {
            if(!(t%a[i])) tsum++;
        }
        if(tsum>=3) {
            printf("%d", t);
            return 0;
        }
    }
}