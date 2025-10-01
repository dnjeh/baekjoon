#include <stdio.h>
int main() {
    int T, n, old, new, f;
    scanf("%d", &T);
    for(int i=0;i<T;i++) {
        scanf("%d", &n);
        f=0;
        printf("Denominations:");
        for(int j=0;j<n;j++) {
            scanf("%d", &new);
            if(j&&new<old*2) f=1;
            printf(" %d", new);
            old=new;
        }
        printf("\n%s coin denominations!\n\n", f?"Bad":"Good");
    }
}