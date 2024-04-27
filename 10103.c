#include <stdio.h>
int main() {
    int n, a=100, b=100, t, tt;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d %d", &t, &tt);
        if(t<tt) a-=tt;
        else if(t>tt) b-=t;
    }
    printf("%d\n%d", a, b);
}