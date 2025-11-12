#include <stdio.h>
int main() {
    int n;
    double q, y, ans=0;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%lf %lf", &q, &y);
        ans+=q*y;
    }
    printf("%.03lf", ans);
}