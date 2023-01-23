#include <stdio.h>
int main() {
    int t, a[2]={0, }, i;
    for(i=0;i<8;i++) {
        scanf("%d", &t);
        if(i<4) {
            a[0]+=t;
        }
        else {
            a[1]+=t;
        }
    }
    if(a[0]<a[1]) {
        printf("%d", a[1]);
    }
    else {
        printf("%d", a[0]);
    }
}