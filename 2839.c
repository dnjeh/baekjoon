#include <stdio.h>
int main() {
    int n, i, j, k5=0, k3=0;
    scanf("%d", &n);
    for(k5=n/5, k3=(n-(k5*5))/3;(k5*5+k3*3)!=n;) {
        k3=(n-(--k5*5))/3;
        if(k5<0) {
            printf("-1");
            return 0;
        }
    }  
    printf("%d", k5+k3);
}