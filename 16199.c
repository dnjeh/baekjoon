#include <stdio.h>
int main() {
    int y, m, d, ny, nm, nd;
    scanf("%d %d %d %d %d %d", &y, &m, &d, &ny, &nm, &nd);
    if(nm>m||(nm==m&&nd>=d)) printf("%d", ny-y);
    else printf("%d", ny-y-1);
    printf("\n%d\n%d", ny-y+1, ny-y);
}