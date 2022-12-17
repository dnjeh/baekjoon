#include <stdio.h>
#include <math.h>
int main() {
    int T, t, i, j, tcnt=0;
    scanf("%d", &T);
    for(i=0;i<T;i++) {
        tcnt=0;
        scanf("%d", &t);
        for(j=t;j;j/=10,tcnt++) {}
        if(t*t%(int)pow(10, tcnt)==t) {
            printf("YES\n");
        } 
        else {
            printf("NO\n");
        }
    }
}