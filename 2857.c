#include <stdio.h>
int abs(int t) {
    return t<0?t*-1:t;
}
int main() {
    int t, sum=0, f=0;
    for(int i=0;i<10;i++) {
        scanf("%d", &t);
        int aft=abs(100-(sum+t)), bef=abs(100-sum);
        if(!f&&bef>=aft) sum+=t;
        else f=1;
    }
    printf("%d", sum);
}