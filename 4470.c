#include <stdio.h>
int main() {
    char t[55], h;
    int n, i;
    scanf("%d%c", &n, &h);
    for(i=0;i<n;i++) {
        fgets(t, 52, stdin);
        printf("%d. %s", i+1, t);
    }
}