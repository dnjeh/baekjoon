#include <stdio.h>
int main() {
    char a[10000];
    int n, ans=0;
    char t[2];
    scanf("%d\n", &n);
    for(int i=0;i<n;i++) {
        scanf("%s", t);
        a[i]=t[0];
    }
    for(int i=0;i<n;i++) {
        scanf("%s", t);
        if(a[i]==t[0]) ans++;
    }
    printf("%d", ans);
}