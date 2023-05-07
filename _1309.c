#include <stdio.h>
long long int b[100001][2]={{0, 0}, {0, 1}, };
void dp(int _t) {
    if(b[_t][1]) return;
    dp(_t-1);
    b[_t][0]=b[_t-1][0]+b[_t-1][1]*2;
    b[_t][1]=b[_t-1][1]+b[_t-1][0];
}
int main() {
    for(int i=2;i<=100000;i++) {
        b[i][0]=b[i-1][0]+b[i-1][1]*2;
        b[i][1]=b[i-1][1]+b[i-1][0];
        printf("%lld , %lld\n", b[i-1][1], b[i][1]);
        if(b[i-1][1]>b[i][1])  {
            printf("버ㅏ버ㅓ버 버그버그 i : %d", i);
            return 0;
        }
    }
    printf("이게 되네;;;");
}