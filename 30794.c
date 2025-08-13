#include <stdio.h>
int main() {
    int n, ans=0;
    char t[10];
    scanf("%d %s", &n, t);
    if(t[0]=='b') ans=n*200;
    else if(t[0]=='c') ans=n*400;
    else if(t[0]=='g') ans=n*600;
    else if(t[0]=='p') ans=n*1000;
    printf("%d", ans);
}