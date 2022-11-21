#include <stdio.h>
int main() {
    int sum=0, i, n, max=0, t;
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        scanf("%d", &t);
        sum+=t;
        if(max<t) {
            max=t;
        }
    }
    printf("%.3lf", sum/(double)n/max*100);
}