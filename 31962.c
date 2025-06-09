#include <stdio.h>
int main() {
    int max=-1, n, x, a, b;
    scanf("%d %d", &n, &x);
    for(int i=0;i<n;i++) {
        scanf("%d %d", &a, &b);
        if(a+b<=x&&(max==-1||max<a)) max=a; 
    }
    printf("%d", max);
}