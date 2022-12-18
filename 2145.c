#include <stdio.h>
int numSum(int t) {
    int tsum=0;
    for(;t;t/=10) {
        tsum+=t%10;
    }
    if(tsum/10) return numSum(tsum);
    else return tsum;
}
int main() {
    int N;
    scanf("%d", &N);
    if(!N) {
        return 0;
    }
    printf("%d\n", numSum(N));
    main();
}