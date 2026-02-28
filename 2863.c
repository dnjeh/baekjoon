#include <stdio.h>
int main() {
    int a, b, c, d, ans, tans;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int A[4] = { a*a*b*d+a*b*b*c
    , a*b*c*c+a*a*c*d
    , a*c*d*d+b*c*c*d
    , b*b*c*d+a*b*d*d };
    for(int i=0;i<4;i++) {
        if(!i||A[i]>tans) {
            ans=i;
            tans=A[i];
        }
    }
    printf("%d", ans);
}