#include <stdio.h>
long long int zero[41]={1, 0, }, one[41]={0, 1};
long long int pibo0(int _t) {
    int res=0;
    if(zero[_t]||_t==1) return zero[_t];
    else return zero[_t]=pibo0(_t-1)+pibo0(_t-2);
}
long long int pibo1(int _t) {
    int res=0;
    if(one[_t]||!_t) return one[_t];
    else return one[_t]=pibo1(_t-1)+pibo1(_t-2);
}
int main() {
    int T, i, t;
    scanf("%d", &T);
    for(i=0;i<T;i++) {
        scanf("%d", &t);
        printf("%lld %lld\n", pibo0(t), pibo1(t));
    }
}