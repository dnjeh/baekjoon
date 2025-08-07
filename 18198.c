#include <stdio.h>

int main() {
    char t[210];
    int a=0, b=0;
    scanf("%s", t);
    for(int i=0;t[i];i+=2) {
        if(t[i]=='A') a+=t[i+1]-'0';
        else b+=t[i+1]-'0';
    }
    printf("%c", a>b?'A':'B');
    return 0;
}
