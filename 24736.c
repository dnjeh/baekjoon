#include <stdio.h>
int main() {
    int i, j, sum[2]={0}, t;
    for(i=0;i<2;i++) {
        for(j=1;j<=4;j++) {
            scanf("%d", &t);
            sum[i]+=t*(6/j);
        }
        scanf("%d", &t);
        sum[i]+=t*2;
    }
    printf("%d %d", sum[0], sum[1]);
}