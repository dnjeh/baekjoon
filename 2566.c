#include <stdio.h>
int main() {
    int i, j, max=0, maxi, maxj, t;
    for(i=1;i<=9;i++) {
        for(j=1;j<=9;j++) {
            scanf("%d", &t);
            if(t>=max) {
                max=t;
                maxi=i;
                maxj=j;
            }
        }
    }
    printf("%d\n%d %d", max, maxi, maxj);
}