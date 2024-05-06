#include <stdio.h>
int main() {
    int T, a, b, c, tcnt;
    scanf("%d", &T);
    for(int t=0;t<T;t++) {
        scanf("%d %d %d", &a, &b, &c);
        tcnt=0;
        for(int i=1;i<=a;i++) for(int j=1;j<=b;j++) for(int k=1;k<=c;k++) {
            if((i%j)==(j%k)&&(j%k)==(k%i)) tcnt++;
        } 
        printf("%d\n", tcnt);
    }
}