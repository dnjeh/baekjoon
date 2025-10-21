#include <stdio.h>
int main() {
    char t[30];
    int n, m;
    scanf("%d %d", &n, &m);
    printf("%d\n", m);
    for(int i=0;i<m;i++) {
        scanf("%s", t);
        printf("%s\n", t);
    }
}