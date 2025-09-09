#include <stdio.h>
int main() {
    char a[100][110], t[110];
    int n, m, ans=0;
    scanf("%d %d\n", &n, &m);
    for(int i=0;i<n;i++) {
        scanf("%s", a[i]);
    }
    for(int i=0;i<n;i++) {
        scanf("%s", t);
        for(int j=0;j<m;j++) {
            if(a[i][j]==t[j]) ans++;
        }
    }
    printf("%d", ans);
}