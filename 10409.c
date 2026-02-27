#include <stdio.h>
int main() {
    int n, T, t;
    scanf("%d %d", &n, &T);
    for(int i=0;i<n;i++) {
        scanf("%d", &t);
        if(t>T) {
            printf("%d", i);
            return 0;
        } 
        T-=t;
    }
    printf("%d", n);
}