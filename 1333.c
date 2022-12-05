#include <stdio.h>
int main() {
    int n, l, d, i, j, t=0;
    scanf("%d %d %d", &n, &l, &d);
    for(i=0;i<n;i++) {
        for(j=0;j<l;j++) {
            t++;
        }
        if(i+1<n) {
            for(j=0;j<5;j++) {
                if(t%d==0) {
                    printf("%d", t);
                    return 0;   
                }
                t++;
            }
        }
    }
    for(;;t++) {
        if(t%d==0) {
            printf("%d", t);
            return 0;
        }
    }
}