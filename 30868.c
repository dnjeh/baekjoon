#include <stdio.h>
void print(int n) {
    for(;n>0;n-=5) {
        if(n>4) printf("++++%c", n>5?' ':'\n');
        else {
            for(int i=0;i<n;i++) {
                printf("|");
            }
            printf("\n");
        }
    }
}
int main() {
    int T, n;
    scanf("%d", &T);
    for(int i=0;i<T;i++) {
        scanf("%d", &n);
        print(n);
    }
}