#include <stdio.h>

int main() {
    int n, a, b, c;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d %d %d", &a, &b, &c);
        if(a+b==c||a-b==c||b-a==c||a*b==c||(a/b*b==a&&a/b==c)||(b/a*a==b&&b/a==c)) printf("Possible\n");
        else printf("Impossible\n");
    }
    return 0;
}
