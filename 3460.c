#include <stdio.h>
int main() {
    int T, t, f;
    scanf("%d", &T);
    for(int i=0;i<T;i++) {
        scanf("%d", &t);
        for(int j=0, f=0;t;t/=2, j++) {
            if(t%2) {
                if(f) printf(" ");
                printf("%d", j);
                f=1;
            }
        } printf("\n");
    }
}