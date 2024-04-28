#include <stdio.h>
#include <string.h>
int main() {
    char a[5], t[5];
    int n, cnt=0;
    scanf("%s", a);
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%s", t);
        if(!strcmp(a, t)) cnt++;
    }
    printf("%d", cnt);
}