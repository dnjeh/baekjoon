#include <stdio.h>

int main() {
    int n, t, tt;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d %d", &t, &tt);
        printf("%s\n", t>=tt?"MMM BRAINS":"NO BRAINS");
    }
    return 0;
}
