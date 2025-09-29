#include <stdio.h>
int main() {
    char t[110];
    int T, n, a;
    double b, tsum;
    scanf("%d", &T);
    for(int i=0;i<T;i++) {
        scanf("%d", &n);
        tsum=0;
        for(int i=0;i<n;i++) {
            scanf("%s %d %lf", t, &a, &b);
            tsum+=a*b;
        }
        printf("$%.2lf\n", tsum);
    } 
}