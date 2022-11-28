#include <stdio.h>
int main() {
    long long int T, i, t[2], t1[2];
    scanf("%lld", &T);
    for(i=0;i<T;i++) {
        scanf("%lld %lld %lld %lld", &t[0], &t[1], &t1[0], &t1[1]);
        if(t[0]*t[1]>t1[0]*t1[1]) {
            printf("TelecomParisTech\n");
        }
        else if(t[0]*t[1]<t1[0]*t1[1]) {
            printf("Eurecom\n");
        }
        else {
            printf("Tie\n");
        }
    }
}