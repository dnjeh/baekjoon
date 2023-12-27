#include <stdio.h>
int main() {
    int a, b, c, i, t, tt, ttt;
    scanf("%d %d %d", &a, &b, &c);
    for(t=tt=ttt=i=1;;i++, t++, tt++, ttt++) {
        if(t>15) t=1;
        if(tt>28) tt=1;
        if(ttt>19) ttt=1;
        if(t==a&&tt==b&&ttt==c) {
            printf("%d", i);
            return 0;
        }  
    }
}