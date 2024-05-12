#include <stdio.h>
int main() {
    char t[110], a=0;
    scanf("%s", t);
    for(int i=0;t[i];i++) {
        if(t[i]=='M') a|=1<<0;
        else if(t[i]=='O') a|=1<<1;
        else if(t[i]=='B') a|=1<<2;
        else if(t[i]=='I') a|=1<<3;
        else if(t[i]=='S') a|=1<<4;
    }
    printf("%s", a==0b11111?"YES":"NO");
}