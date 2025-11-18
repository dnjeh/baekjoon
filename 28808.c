#include <stdio.h>
int main() {
    char t[110];
    int n, m, ans=0, tt;
    scanf("%d %d", &n, &m);
    for(int i=0;i<n;i++) {
        scanf("%s", t);
        for(int j=0;j<m;j++) {
            if(t[j]=='+') {
                ans++;
                break;
            }
            else if(t[j]=='.') break;
        }
    }
    printf("%d", ans);
}