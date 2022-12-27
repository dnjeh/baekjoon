#include <stdio.h>
int main() {
    int a, t, i, cnt;
    scanf("%d", &a);
    t=a;
    for(cnt=0;!cnt||a!=t;cnt++) {
        t=(t%10*10)+(t/10+t%10)%10;
    }
    printf("%d", cnt);
}