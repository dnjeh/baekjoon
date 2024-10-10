#include <stdio.h>

int main() {
    int n, max=0, t;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d", &t);
        if(max<t+i-n) max=t+i-n;
    }
    printf("%d", max);
    return 0;
}
