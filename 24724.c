#include <stdio.h>
int main() {
    int T, n, a, b;
    scanf("%d", &T);
    for(int _T=0;_T<T;_T++) {
        scanf("%d", &n);
        for(int i=0;i<n+1;i++) {
            scanf("%d %d", &a, &b);
        }
        printf("Material Management %d\n", _T+1);
        printf("Classification ---- End!\n");
    }
}