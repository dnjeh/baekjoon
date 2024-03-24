#include <stdio.h>
int main() {
    int max=0, tmax=0, pret, t, n;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d", &t);
        if(i&&pret<t) {
            tmax+=t-pret;
            if(tmax>max) max=tmax;
        }
        else {
            tmax=0;
        }
        pret=t;
    }
    printf("%d", max);
}