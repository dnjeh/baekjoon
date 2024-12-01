#include <stdio.h>
int main() {
    int k, a=1, b=0, t, tt;
    scanf("%d", &k);
    for(int i=0;i<k;i++) {
        t=b;
        tt=a+b;
        a=t; b=tt;
    }
    printf("%d %d", a, b);
}
