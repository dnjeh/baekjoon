#include <stdio.h>
int main() {
    char t[2];
    int a, n, tt;
    scanf("%d %d", &a, &n);
    for(int i=0;i<n;i++) {
        scanf("%s %d", t, &tt);
        a+=tt*(t[0]=='-'?-1:1);
    }
    printf("%d", a);
}