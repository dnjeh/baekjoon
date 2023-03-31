#include <stdio.h>
int d(int _t) { return _t>0?_t:_t*-1; }
int main() {
    int n, max=9999999, min=100, i, j, m=0, a=0, t, f, cnt1=0, cnt2=0;
    scanf("%d%d", &n, &m);
    for(i=0;i<m;i++) {
        scanf("%d", &t);
        a+=1<<(t+1);
    }
    for(j=i=0;i<=999900;j=++i) {
        f=1;
        if(!j&&(a&(1<<1))) f=0;
        for(;j;j/=10) {
            if(a&(1<<((j%10)+1))) {
                f=0;
                break;
            }
        }
        if(f) {
            if(i<n) max=i;
            else if(i>n) {
                min=i;
                break;
            }
            else {
               min=max=i;
               break;
            }
        }
    }
    if(max) for(i=max;i;i/=10) cnt1++;
    else cnt1=1;
    if(max) for(i=min;i;i/=10) cnt2++;
    else cnt2=1;
    printf("%d", d(n-100)<(cnt1+d(n-max))&&d(n-100)<(cnt2+d(min-n))?d(n-100):(cnt1+d(n-max))<(cnt2+d(min-n))?(cnt1+d(n-max)):(cnt2+d(min-n)));
}