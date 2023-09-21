#include <stdio.h>
int main() {
    int n, max, min, t, i;
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        scanf("%d", &t);
        if(!i||max<t) max=t;
        if(!i||min>t) min=t;
    }
    printf("%d", max*min);
}