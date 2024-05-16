#include <stdio.h>
int main() {
    int n, t, tt;
    scanf("%d %d", &n, &t);
    tt=t;
    if(n>=20&&tt>t/4*3) tt=t/4*3;
    if(n>=15&&tt>t-2000) tt=t-2000;
    if(n>=10&&tt>t/10*9) tt=t/10*9;
    if(n>=5&&tt>t-500) tt=t-500;
    if(tt<0) tt=0;
    printf("%d", tt);
}