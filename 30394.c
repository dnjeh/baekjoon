#include <stdio.h>

int main() {
    int t, tt, n, ymax, ymin;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d %d", &t, &tt);
        if(!i||ymax<tt) ymax=tt;
        if(!i||ymin>tt) ymin=tt;
    }
    printf("%d", ymax-ymin);
    return 0;
}
