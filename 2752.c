#include <stdio.h>
int main() {
    int max=0, min=1000000, t, i, mid=0;
    for(i=0;i<3;i++) {
        scanf("%d", &t);
        mid+=t;
        if(max<t) max=t;
        if(min>t) min=t;
    }
    mid-=max+min;
    printf("%d %d %d", min, mid, max);
}