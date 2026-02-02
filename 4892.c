#include <stdio.h>
int main() {
    int n, i;
    for(scanf("%d", &n), i=0;n;scanf("%d", &n), i++) {
        printf("%d. %s %d\n", i+1, (n*3%2?"odd":"even"), (n*3%2?(n*3+1)/2:n*3/2)*3/9);
    }
}