#include <stdio.h>
int main() {
    int n, t, tt, ttt;
    scanf("%d", &n);
    printf("Gnomes:\n");
    for(int i=0;i<n;i++) {
        scanf("%d %d %d", &t, &tt, &ttt);
        if((t<=tt&&tt<=ttt)||(t>=tt&&tt>=ttt)) printf("Ordered\n");
        else printf("Unordered\n");
    }
}