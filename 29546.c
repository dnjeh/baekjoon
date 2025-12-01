#include <stdio.h>
char t[1000][110];
int main() {
    int n, m, a, b;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%s", t[i]);
    }
    scanf("%d", &m);
    for(int i=0;i<m;i++) {
        scanf("%d %d", &a, &b);
        for(int j=a-1;j<b;j++) {
            printf("%s\n", t[j]);
        }
    }
}