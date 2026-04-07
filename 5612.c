#include <stdio.h>
int main() {
    int a, b, t, tt, max=0, f=1;
    scanf("%d %d", &a, &b);
    max=b>0?b:(f=0);
    for(int i=0;i<a;i++) {
        scanf("%d %d", &t, &tt);
        b+=t-tt;
        if(b>max) max=b;
        if(b<0) f=0;
    }
    printf("%d", !f?0:max);
}