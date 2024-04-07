#include <stdio.h>

int main() {
    int n, t, sum, tsum=0;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d", &t);
        if(!t) tsum=0;
        else tsum++;
        sum+=tsum;
    }
    printf("%d", sum);
}
