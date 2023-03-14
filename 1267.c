#include <stdio.h>
int main() {
    int N, sum[2]={0, }, i, t;
    scanf("%d", &N);
    for(i=0;i<N;i++) {
        scanf("%d", &t);
        sum[0]+=(t/30+1)*10;
        sum[1]+=(t/60+1)*15;
    }
    printf("%s %d", sum[0]==sum[1]?"Y M":sum[0]>sum[1]?"M":"Y", sum[0]<sum[1]?sum[0]:sum[1]);
}