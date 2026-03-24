#include <stdio.h>
int main() {
    int n, m, t, nmax, mmax;
    scanf("%d %d", &n, &m);
    for(int i=0;i<n;i++) {
        scanf("%d", &t);
        if(!i||t>nmax) nmax=t;
    }
    for(int i=0;i<m;i++) {
        scanf("%d", &t);
        if(!i||t>mmax) mmax=t;
    }
    printf("%d", nmax+mmax);
}
