#include <stdio.h>
int main() {
    int t, max, sum=0;
    for(int i=0;i<3;i++) {
        scanf("%d", &t);
        if(!i||max<t) max=t;
        sum+=t;
    }
    if(sum-max<=max) sum=(sum-max)*2-1;
    printf("%d", sum);
    return 0;
}
