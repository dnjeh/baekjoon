#include <stdio.h>
int main() {
    int h, w, n, t, i;
    scanf("%d", &t);
    for(i=0;i<t;i++) {
        scanf("%d %d %d", &h, &w, &n);
        printf("%d%02d\n", (n%h)?n%h:h, (n/h)?((n%h)?n/h+1:n/h):1);
    }
}