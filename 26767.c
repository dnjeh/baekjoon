#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for(int i=1;i<=n;i++) {
        if(!(i%7)&&!(i%11)) printf("Wiwat!\n");
        else if(!(i%7)) printf("Hurra!\n");
        else if(!(i%11)) printf("Super!\n");
        else printf("%d\n", i);
    }
}