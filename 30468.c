#include <stdio.h>
int main() {
    int n, t, sum=0;
    for(int i=0;i<4;i++) {
        scanf("%d", &t);
        sum+=t;
    }
    scanf("%d", &n);
    printf("%d", n*4-sum<0?0:n*4-sum);
}