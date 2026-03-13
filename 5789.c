#include <stdio.h>
#include <string.h>
int main() {
    int n, t;
    char a[1010];
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%s", a);
        t=strlen(a);
        printf("%s\n", a[t/2-1]==a[t/2]?"Do-it":"Do-it-Not");
    }
}