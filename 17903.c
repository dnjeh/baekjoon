#include <stdio.h>
int main() {
    int n, m, t;
    scanf("%d %d", &n, &m);
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            scanf("%d", &t);
        }
    }
    printf("%ssatisfactory", (n>=8?"":"un"));
}