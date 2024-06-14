#include <stdio.h>

int main() {
    int n, sum=0, a[6], t, T, P;
    scanf("%d", &n);
    for(int i=0;i<6;i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d %d", &T, &P);
    for(int i=0;i<6;i++) {
        sum+=a[i]/T+((a[i]%T)?1:0);
    }
    printf("%d\n%d %d", sum, n/P, n%P);
    return 0;
}
