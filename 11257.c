#include <stdio.h>
int main() {
    int a, b, c, n, t;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d %d %d %d", &t, &a, &b, &c);
        printf("%d %d %s\n", t, a+b+c, a+b+c>=55&&a>=35*0.3&&b>=25*0.3&&c>=40*0.3?"PASS":"FAIL");
    }
}