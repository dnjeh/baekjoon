#include <stdio.h>
int main() {
    int n, i, sum=0, t, tt=10;
    scanf("%d", &n);
    for(i=1;i<=n;i++) {
        t=i;
        tt=10;
        while(t) {
            if(tt==10&&t/10) {
                tt=((t%10)-(t/10%10));
                t/=10;
            }
            else if(t/10) {
                if(tt!=((t%10)-(t/10%10))) break;
                t/=10;
            }
            else {
                t/=10;
            }
        }
        if(!t) sum++;
    }
    printf("%d", sum);
}