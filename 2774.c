#include <stdio.h>
int main() {
    int T, t[10]={0, }, a, i, j, tsum=0;
    scanf("%d", &T);
    for(i=0;i<T;i++, tsum=0) {
        for(j=0;j<10;j++) {
            t[j]=0;
        }
        scanf("%d", &a);
        for(;a;a/=10) {
            t[a%10]++;
        }
        for(j=0;j<10;j++) {
            if(t[j]) tsum++;
        }
        printf("%d\n", tsum);
    }
}