#include <stdio.h>
int main() {
    int n, m, f;
    char t[2];
    scanf("%d %d", &n, &m);
    for(int i=0;i<n;i++) {
        f=0;
        for(int j=0;j<m;j++) {
            scanf("%s", t);
            if(t[0]=='A') f++;
        }
        if(f!=1) {
            printf("No");
            return 0;
        }
    }
    printf("Yes");
}