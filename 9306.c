#include <stdio.h>
int main() {
    char t[25], tt[25];
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%s %s", t, tt);
        printf("Case %d: %s, %s\n", i+1, tt, t);
    }
}