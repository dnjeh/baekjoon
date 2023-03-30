#include <stdio.h>
int main() {
    int i, j, t, tt, max, mmax;
    for(i=0;i<3;i++) {
        scanf("%d", &t);
        if(!i||t<max) max=t;
    }
    for(i=0;i<2;i++) {
        scanf("%d", &tt);
        if(!i||tt<mmax) mmax=tt;
    }
    printf("%d", max+mmax-50);
}