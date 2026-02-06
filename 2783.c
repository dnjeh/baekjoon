#include <stdio.h>
int main() {
    int x, y, n;
    double min;
    scanf("%d %d", &x, &y);
    min=1000/(double)y*x;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d %d", &x, &y);
        if(min>(1000/(double)y*x)) min=1000/(double)y*x;
    }
    printf("%.02lf", min);
}