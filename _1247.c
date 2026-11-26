#define MAX 0xffffffffffffffff
#include <stdio.h>
int main() {
    int n;
    long long int cnt, lop, t;
    for(int i=0;i<3;i++) {
        cnt=lop=0;
        scanf("%d", &n);
        for(int j=0;j<n;j++) {
            scanf("%lld", &t);
            if(cnt<MAX-t) {
                printf(">>1\n");
                lop--;
                cnt=MAX-t+cnt;
            }
            else if(cnt<(-MAX)+t) {
                printf(">>2\n");
                lop++;
                cnt=-MAX+t+cnt;
            }
            else {
                printf(">>0\n");
                cnt+=t;
            }
        }
        if(lop>0||(!lop)&&cnt>0) printf("+");
        else if(lop<0||(!lop)&&cnt<0) printf("-");
        else printf("0");
        printf("\n");
    }
}