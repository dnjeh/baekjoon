#include <stdio.h>
int main() {
    int a[] = {1, 2, 3, 3, 4, 10};
    int b[] = {1, 2, 2, 2, 3, 5, 10};
    int T, t, nsum, msum;
    scanf("%d", &T);
    for(int k=0;k<T;k++) {
        nsum=msum=0;
        for(int i=0;i<6;i++) {
            scanf("%d", &t);
            nsum+=t*a[i];
        }
        for(int i=0;i<7;i++) {
            scanf("%d", &t);
            msum+=t*b[i];
        }
        printf("Battle %d: %s\n", k+1, nsum>msum?"Good triumphs over Evil":(nsum<msum?"Evil eradicates all trace of Good":"No victor on this battle field"));
    }
}