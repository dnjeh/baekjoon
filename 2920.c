#include <stdio.h>
int main() {
    int i, asc=1, desc=1, t=0, t1=0;
    for(i=0;i<8;i++) {
        t1=t;
        scanf("%d", &t);
        if(t1!=0) {
            if(t1<t) {
                desc=0;
            }
            else if(t1>t) {
                asc=0;
            }
        }
    }
    printf(desc?"descending":(asc?"ascending":"mixed"));
}