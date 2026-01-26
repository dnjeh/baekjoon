#include <stdio.h>
int main() {
    int n, min, max, t;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d", &t);
        if(!i||min>t) min=t;
        if(!i||max<t) max=t;
    }
    printf("%d", max-min);
}