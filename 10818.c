#include <stdio.h>
int main() {
    int max, min, i, t, n;
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        scanf("%d", &t);
        if(i==0||t>max) {
            max=t;
        }
        if(i==0||t<min) {
            min=t;
        }
    }
    printf("%d %d", min, max);
}