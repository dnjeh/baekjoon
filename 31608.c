#include <stdio.h>
int main() {
    char a[110], b[110];
    int n, ans=0;
    scanf("%d %s %s", &n, a, b);
    for(int i=0;a[i];i++) {
        if(a[i]!=b[i]) ans++;
    }
    printf("%d", ans);
}