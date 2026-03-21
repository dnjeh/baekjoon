#include <stdio.h>
int main() {
    int T, d;
    scanf("%d", &T);
    for(int i=0;i<T;i++) {
        scanf("%d", &d);
        int j;
        for(j=0;j*j<d;j++) {
            if(j*j+j>d) break;
        }
        printf("%d\n", j-1);
    }
}