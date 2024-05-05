#include <stdio.h>
int main() {
    int T, s, n, t, tt;
    scanf("%d", &T);
    for(int i=0;i<T;i++) {
        scanf("%d\n%d", &s, &n);
        for(int j=0;j<n;j++) {
            scanf("%d %d", &t, &tt);
            s+=t*tt;
        } 
        printf("%d\n", s);
    }
}