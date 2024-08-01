#include <stdio.h>
int main() {
    int t, f;
    scanf("%d", &t);
    t++;
    for(;;) {
        f=0;
        for(int i=t;i;i/=10) {
            if(!(i%10)) {
                f=1;
                break;
            }
        }
        if(f) t++;
        else break;
    }
    printf("%d", t);
}