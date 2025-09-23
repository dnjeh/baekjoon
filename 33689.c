#include <stdio.h>
int main() {
    int n, ans=0;
    char a[25];
    scanf("%d\n", &n);
    for(int i=0;i<n;i++) {
        scanf("%s", a);
        if(a[0]=='C') ans++;
    }
    printf("%d", ans);
}