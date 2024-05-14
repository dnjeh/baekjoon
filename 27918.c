#include <stdio.h>

int main() {
    int a=0, b=0;
    char t[2];
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%s", t);
        if(t[0]=='D') a++;
        else b++;
        if(a-b>=2||a-b<=-2) break;
    }
    printf("%d:%d", a, b);
    return 0;
}
