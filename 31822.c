#include <stdio.h>
#include <string.h>
int main() {
    int n, ans=0;
    char t[20], t2[20];
    scanf("%s\n", t);
    t[5]=0;
    scanf("%d\n", &n);
    for(int i=0;i<n;i++) {
        scanf("%s", t2);
        t2[5]=0;
        if(!strcmp(t, t2)) ans++;
    }
    printf("%d", ans);
}