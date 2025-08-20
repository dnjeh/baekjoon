#include <stdio.h>

int main() {
    int n, max=0, t, tt;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d %d", &t, &tt);
        if(max<t*tt) max=t*tt;
    }
    printf("%d", max);
    return 0;
}
