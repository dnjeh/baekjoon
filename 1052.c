#include <stdio.h>
int a, b, sum;
int check() {
    int ret=0;
    for(int i=a;i;i>>=1) {
        if(i&1) ret++;
    }
    return ret;
}
int main() {
    scanf("%d %d", &a, &b);
    for(int i=1;;i<<=1) {
        if(b>=check()) break;
        if(a&1) {
            a++;
            sum+=i;
        }
        a>>=1;
    }
    printf("%d", sum);
}