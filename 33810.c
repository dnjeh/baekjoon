#include <stdio.h>
int main() {
    int ans = 0;
    char *t = "SciComLove", a[20];
    scanf("%s", a);
    for(int i=0;a[i];i++) {
        if(t[i]!=a[i]) ans++;
    }
    printf("%d", ans);
}